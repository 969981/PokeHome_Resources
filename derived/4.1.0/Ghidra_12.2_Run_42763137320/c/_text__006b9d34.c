/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b9d34; name: FUN_.text__006b9d34
 */


void FUN__text__006b9d34(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ushort local_14;
  ushort local_12;
  
  lVar5 = *(long *)(param_1 + 0xd8);
  uVar2 = *(uint *)(lVar5 + 0x14);
  if ((uVar2 & 3) < (*(byte *)(lVar5 + 0x10) & 3) &&
      ((uVar2 & 0xff) >> 4 & 3) < (*(byte *)(lVar5 + 0x10) >> 4 & 3)) {
    lVar6 = ((ulong)uVar2 & 3) * 0x10;
    FUN__text__006bc14c(*(long *)(lVar5 + 0x18) + lVar6);
    *(uint *)(lVar5 + 0x14) = *(uint *)(lVar5 + 0x14) & 0xfffffffc | *(uint *)(lVar5 + 0x14) + 1 & 3
    ;
    uVar2 = *(uint *)(*(long *)(param_1 + 0xd8) + 0x14);
    *(uint *)(*(long *)(param_1 + 0xd8) + 0x14) =
         uVar2 & 0xffffffc0 | uVar2 & 0xf | (uVar2 & 3) << 4;
    uVar2 = *(uint *)(*(long *)(param_1 + 0xd8) + 0x10);
    puVar1 = (undefined4 *)
             (*(long *)(*(long *)(param_1 + 0xd8) + 0x18) + lVar6 +
             ((ulong)uVar2 & 3) * 0x10 + ((ulong)(uVar2 >> 2) & 3) * 0x14);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    FUN__text__0069d790(param_1 + 0xf0,*(uint *)(*(long *)(param_1 + 0xd8) + 0x14) & 3);
    if (((*(float *)(param_1 + 0x50) == 0.0) && (*(float *)(param_1 + 0x54) == 0.0)) &&
       ((*(uint *)(*(long *)(param_1 + 0xd8) + 0x14) & 3) == 1)) {
      plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x18) + 8);
      if (plVar4 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        (**(code **)(*plVar4 + 0x20))(&local_14);
        uVar3 = NEON_ucvtf((uint)local_14);
        *(undefined4 *)(param_1 + 0x50) = uVar3;
        uVar3 = NEON_ucvtf((uint)local_12);
        *(undefined4 *)(param_1 + 0x54) = uVar3;
      }
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
      return;
    }
  }
  return;
}


