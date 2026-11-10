/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064faf4; name: FUN_.text__0064faf4
 */


void FUN__text__0064faf4(long *param_1)

{
  memcpy((void *)(*param_1 + 0x1648),(void *)((long)param_1 + 0x1a2),0x2e);
  memcpy((void *)(*param_1 + 0x1680),param_1 + 0x3b,0x2e);
  *(undefined8 *)(*param_1 + 0x16b8) = *(undefined8 *)param_1[0x84];
  *(undefined4 *)(*param_1 + 0x16c0) = *(undefined4 *)(param_1[0x84] + 0x80);
  *(long *)(*param_1 + 0x1678) = param_1[0x3a];
  *(long *)(*param_1 + 0x16b0) = param_1[0x41];
  return;
}


