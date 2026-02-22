
import wave
import os
import math


def split_wav(input_wav_path: str, output_dir: str, chunk_length_seconds: float):
    
    os.makedirs(output_dir, exist_ok=True)

    with wave.open(input_wav_path, 'rb') as wav:
        params = wav.getparams()
        frame_rate = wav.getframerate()
        total_frames = wav.getnframes()

        frames_per_chunk = int(frame_rate * chunk_length_seconds)
        total_chunks = math.ceil(total_frames / frames_per_chunk)

        for i in range(total_chunks):
            wav.setpos(i * frames_per_chunk)
            frames = wav.readframes(frames_per_chunk)

            output_path = os.path.join(
                output_dir,
                f"chunk_{i:04d}.wav"
            )

            with wave.open(output_path, 'wb') as out_wav:
                out_wav.setparams(params)
                out_wav.writeframes(frames)

    print(f"Created {total_chunks} chunks in '{output_dir}'")


if __name__ == "__main__":
    input_wav = input("path to .wav. file:")
    output_directory = "chunks"
    chunk_duration_seconds = 30  # change this value as needed

    split_wav(input_wav, output_directory, chunk_duration_seconds)
