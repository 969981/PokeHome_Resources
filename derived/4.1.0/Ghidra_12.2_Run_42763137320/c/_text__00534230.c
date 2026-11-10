/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00534230; name: FUN_.text__00534230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00534230(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long local_a0 [3];
  long lStack_88;
  undefined1 auStack_70 [48];
  
  lVar1 = FUN__text__0050c2a0(param_2,*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x38) +
                                       0x68));
  fVar8 = _DAT_008ab250;
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x78);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0xb0);
    lVar2 = FUN__text__0050ac90(param_2,*(undefined8 *)(lVar1 + 0xb8));
    if (lVar2 != 0) {
      fVar5 = *(float *)(lVar1 + 0x3c);
      fVar6 = *(float *)(lVar1 + 0x40);
      fVar7 = *(float *)(lVar1 + 0x44);
      if (((((uint)fVar5 ^ 0xffffffff) & 0x7f800000) != 0 &&
          (((uint)fVar6 ^ 0xffffffff) & 0x7f800000) != 0) &&
          (((uint)fVar7 ^ 0xffffffff) & 0x7f800000) != 0) {
        fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
        fVar8 = _DAT_008ab250;
        if ((((uint)fVar5 ^ 0xffffffff) & 0x7f800000) != 0) {
          fVar8 = fVar5;
        }
      }
    }
  }
  FUN__text__00536c78(_DAT_008ab250,fVar8,auStack_70,*_DAT_008a40c8,_DAT_008ab244,_DAT_008ab248);
  FUN__text__0053a4dc(auStack_70,_DAT_008ab24c);
  FUN__text__0053a4e4(auStack_70,DAT_008ab25c);
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(char *)(*(long *)(*(long *)(lVar1 + 8) + 0x38) + 0xc5) != '\0') {
    if (*(uint *)(lVar1 + 0x60) != 0) {
      lVar2 = (ulong)*(uint *)(lVar1 + 0x60) * 0x50;
      puVar4 = *(undefined8 **)(lVar1 + 0x58);
      do {
        (**(code **)*puVar4)(puVar4);
        lVar2 = lVar2 + -0x50;
        puVar4 = puVar4 + 10;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(lVar1 + 0x60) = 0;
    FUN__text__0051cae0(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0xa0) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
  }
  local_a0[0] = _DAT_008a4360 + 0x10;
  local_a0[1] = 0x40c90fdb40000000;
  local_a0[2] = lVar1 + 0xa8;
  lStack_88 = lVar1;
  FUN__text__00539444(auStack_70,lVar1,uVar3,local_a0);
  FUN__text__00536cac(auStack_70);
  return;
}


