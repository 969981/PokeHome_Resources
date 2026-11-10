/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00534a80; name: FUN_.text__00534a80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00534a80(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_70 [48];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  FUN__text__00521214(*(undefined8 *)(param_1 + 0x30),&lStack_40,auStack_38);
  lVar1 = FUN__text__0050ac90(param_2,*(undefined8 *)
                                       (*(long *)(auStack_70 +
                                                 (ulong)*(uint *)(param_1 + 0x38) * 8 + 0x30) + 0xb8
                                       ));
  fVar2 = _DAT_008ab250;
  if (lVar1 != 0) {
    lVar1 = *(long *)(auStack_70 + (ulong)*(uint *)(param_1 + 0x38) * 8 + 0x30);
    fVar5 = *(float *)(lVar1 + 0x44);
    fVar3 = *(float *)(lVar1 + 0x3c);
    fVar4 = *(float *)(lVar1 + 0x40);
    if ((((((uint)fVar3 ^ 0xffffffff) & 0x7f800000) != 0 &&
         (((uint)fVar4 ^ 0xffffffff) & 0x7f800000) != 0) &&
         (((uint)fVar5 ^ 0xffffffff) & 0x7f800000) != 0) &&
       (fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5),
       (((uint)fVar3 ^ 0xffffffff) & 0x7f800000) != 0)) {
      fVar2 = fVar3;
    }
  }
  FUN__text__00536c78(_DAT_008ab250,fVar2,auStack_70,*(undefined4 *)(param_1 + 0x3c),_DAT_008ab244,
                      *(undefined4 *)(param_1 + 0x40));
  FUN__text__0053a4dc(auStack_70,_DAT_008ab24c);
  FUN__text__0053a4e4(auStack_70,DAT_008ab25c);
  FUN__text__00539a94(auStack_70,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(auStack_70 + (ulong)*(uint *)(param_1 + 0x38) * 8 + 0x30));
  FUN__text__00536cac(auStack_70);
  return;
}


