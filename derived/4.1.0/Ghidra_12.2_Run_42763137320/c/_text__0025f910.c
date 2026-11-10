/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f910; name: FUN_.text__0025f910
 */


void FUN__text__0025f910(char *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  uVar2 = 0xff;
  if (uVar1 <= *(uint *)(param_1 + 0x44)) {
    *(uint *)(param_1 + 0x98) = uVar1 + 1;
    uVar2 = (uint)(((float)uVar1 / (float)*(uint *)(param_1 + 0x44)) * *(float *)(param_1 + 0x20) *
                  255.0);
  }
  if (param_1[0x9c] != '\0') {
    uVar2 = 0xff - uVar2;
  }
  local_28 = uVar2 << 0x18 | 0xffffff;
  FUN__text__005bea1c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_28);
  FUN__text__005bf9ec(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),param_1 + 0x90);
  if (*param_1 != '\0') {
    local_2c = 0x40200000;
    FUN__text__005bea58(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_2c);
    local_24 = (int)(((float)uVar2 / 255.0) * 255.0) << 0x18 |
               ((int)(*(float *)(param_1 + 0x3c) * 255.0) & 0xffU) << 0x10 |
               ((int)(*(float *)(param_1 + 0x38) * 255.0) & 0xffU) << 8 |
               (int)(*(float *)(param_1 + 0x34) * 255.0) & 0xffU;
    FUN__text__005bea1c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),&local_24);
    FUN__text__005bf9ec(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xb0),param_1 + 0x94);
  }
  return;
}


