# 🧪 Build Logs

This folder contains all structured logs from experimental builds, circuit tests, resonance tuning attempts, and energy capture trials within the **Ambient Resonance Energy** project.

It serves as the **primary record** for documenting hands-on work, measurement results, and iterative development.

---

## 📋 Purpose

The goal of this log system is to:
- Maintain a **repeatable record** of each test or build iteration.
- Help identify what works, what doesn’t, and why.
- Provide a clear audit trail as theory is translated into hardware.
- Allow future contributors or collaborators to pick up where others left off.

---

## 🧱 Folder Structure

```text
build_logs/
│
├── log_template.md          <- Use this to create new logs
├── README.md                <- This file
├── 2025-06-07_first_pulse_test.md
├── 2025-06-10_resonance_sweep_7-10Hz.md
├── ...
```

## 🧾 How to Use
1. Copy `log_template.md` to create a new log:

```bash
Copy
Edit
cp log_template.md 2025-06-07_initial_core_test.md
```

2. Fill it out completely.

- Include objective, setup, wiring diagrams (link to `/diagrams`), photos, Bitscope screenshots, Arduino code snippets (if relevant), and results.

- Paste in waveform images or link to `test_images/` if they’re stored externally.

3. Update it after analysis or re-runs with observations and future steps.

## 📸 Tip: Use test_images/
Store all screenshots, photos, oscilloscope images, and sensor output images in the top-level /test_images/ folder. Reference them from your logs using Markdown:

```md
Copy
Edit
![Pulse waveform](../../test_images/2025-06-07_waveform.png)
```

## 🔁 Suggested Practice
- One log per test session.

- Include failures as well as successes.

- Cross-reference circuit diagrams and code used.

- Summarize learnings at the end of each log.

## 📬 Want to Contribute?
If you replicate, improve, or explore variants of any builds, feel free to:

- Fork the repo

- Add your logs

- Open a pull request with clear references

Or just submit screenshots and data via the issue tracker or discussions tab.
