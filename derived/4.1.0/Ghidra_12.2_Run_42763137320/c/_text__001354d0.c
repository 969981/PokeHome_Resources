/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001354d0; name: FUN_.text__001354d0
 */


void FUN__text__001354d0(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__00128db0(param_1,0,1);
  lVar6 = *(long *)(param_1 + 0x2d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = FUN__text__001353e0(lVar6,0x721948);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  lVar6 = *(long *)(param_1 + 0x2d0);
  uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar4 + 0xda));
  *(undefined4 *)(param_1 + 0x6f0) = uVar1;
  uVar1 = NEON_ucvtf((uint)*(ushort *)(lVar4 + 0xdc));
  *(undefined4 *)(param_1 + 0x6f4) = uVar1;
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 0xde));
  *(float *)(param_1 + 0x6f8) = fVar2;
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 0xe0));
  *(float *)(param_1 + 0x6fc) = fVar3;
  *(float *)(param_1 + 0x718) = (*(float *)(lVar4 + 0x54) - fVar2) - fVar3;
  uVar5 = *(undefined8 *)(lVar4 + 0x30);
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(lVar4 + 0x38);
  *(undefined8 *)(param_1 + 0x70c) = uVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = FUN__text__003c79c0(lVar6,0x7218c8);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(lVar4 + 0x50);
  lVar6 = *(long *)(param_1 + 0x2d0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = FUN__text__003c79c0(lVar6,0x721950);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  uVar5 = *(undefined8 *)(lVar4 + 0x30);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(lVar4 + 0x38);
  *(undefined8 *)(param_1 + 0x700) = uVar5;
  return;
}


