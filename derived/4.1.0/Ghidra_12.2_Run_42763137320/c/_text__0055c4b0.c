/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055c4b0; name: FUN_.text__0055c4b0
 */


undefined8 FUN__text__0055c4b0(long param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((long)param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((long)param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((long)param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((long)param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x2e);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)((long)param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((long)param_2 + 0x37);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x3b);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((long)param_2 + 0x3f);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)((long)param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x58) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x5c) = param_2[0x12];
  *(undefined4 *)(param_1 + 0x60) = param_2[0x13];
  *(undefined4 *)(param_1 + 100) = param_2[0x14];
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x55);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((long)param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((long)param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((long)param_2 + 0x61);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)((long)param_2 + 0x65);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((long)param_2 + 0x66);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((long)param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((long)param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((long)param_2 + 0x72);
  fVar1 = exp2f(*(float *)((long)param_2 + 0x76) * 0.1660964);
  *(float *)(param_1 + 0x94) = fVar1;
  uVar2 = *(undefined4 *)((long)param_2 + 0x7a);
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  return 1;
}


