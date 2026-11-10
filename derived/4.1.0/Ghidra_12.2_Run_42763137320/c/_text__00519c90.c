/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519c90; name: FUN_.text__00519c90
 */


void FUN__text__00519c90(long *param_1,uint *param_2,ulong *param_3,byte param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  for (puVar3 = (undefined8 *)*param_1; puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[0x70]) {
    if (puVar3[0x72] != 0) goto LAB__text__00519d40;
  }
  puVar3 = (undefined8 *)FUN__text__00400f80(0xb,0x398);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[0x70] = 0;
    puVar3[0x1c] = puVar3 + 0xe;
    puVar3[0x38] = puVar3 + 0x2a;
    puVar3[0x2a] = puVar3 + 0x1c;
    puVar3[0x54] = puVar3 + 0x46;
    puVar3[0x46] = puVar3 + 0x38;
    puVar3[0x72] = puVar3 + 0x62;
    *puVar3 = 0;
    puVar3[0xe] = puVar3;
    puVar3[0x62] = puVar3 + 0x54;
    *(undefined4 *)(puVar3 + 0x71) = 8;
    if (*param_1 == 0) {
      *param_1 = (long)puVar3;
      puVar3[0x70] = 0;
      puVar2 = (undefined8 *)puVar3[0x72];
    }
    else {
      puVar3[0x70] = *param_1;
      *param_1 = (long)puVar3;
LAB__text__00519d40:
      puVar2 = (undefined8 *)puVar3[0x72];
    }
    if (puVar2 != (undefined8 *)0x0) {
      puVar3[0x72] = *puVar2;
      *puVar2 = 0;
      *(int *)(puVar3 + 0x71) = *(int *)(puVar3 + 0x71) + -1;
      *(undefined4 *)(puVar2 + 0xb) = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined8 *)((long)puVar2 + 100) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(byte *)((long)puVar2 + 0x6d) = param_4;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)((long)puVar2 + 0x5c) = 0x7f7fffff7f7fffff;
      *(undefined1 *)((long)puVar2 + 0x6c) = 0xff;
      *(undefined1 *)((long)puVar2 + 0x6e) = 1;
      puVar2[6] = param_2;
      puVar2[7] = param_3;
      *(byte *)((long)puVar2 + 0x6f) = *(byte *)((long)puVar2 + 0x6f) & 0xfc;
      puVar2[8] = 0;
      puVar2[9] = 0;
      uVar4 = *param_3;
      uVar1 = *param_2;
      puVar2[10] = (((((((((((uVar4 & 0xff ^ ((ulong)param_4 ^ 0xaf63bd4c8601b7df) * 0x100000001b3)
                             * 0x100000001b3 ^ uVar4 >> 8 & 0xff) * 0x100000001b3 ^
                           uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) *
                          0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^
                        uVar4 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x30 & 0xff) *
                       0x100000001b3 ^ uVar4 >> 0x38) * 0x100000001b3 ^ (ulong)uVar1 & 0xff) *
                     0x100000001b3 ^ (ulong)(uVar1 >> 8) & 0xff) * 0x100000001b3 ^
                   (ulong)(uVar1 >> 0x10) & 0xff) * 0x100000001b3 ^ (ulong)(uVar1 >> 0x18);
    }
  }
  return;
}


