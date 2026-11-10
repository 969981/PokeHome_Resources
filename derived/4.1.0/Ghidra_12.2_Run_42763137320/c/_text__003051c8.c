/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003051c8; name: FUN_.text__003051c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__003051c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  ushort local_68 [8];
  void *local_58;
  
  puVar2 = _DAT_0089f528;
  puVar1 = _DAT_0089f508;
  local_68[0] = 0;
  uVar5 = *_DAT_0089f528;
  local_80 = FUN__text__0011b95c(*_DAT_0089f508);
  local_70 = 0x10015f008c54000;
  std::string::assign((char *)local_68);
  iVar3 = FUN__text__00309bc0(uVar5,local_80);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (iVar3 == 0) {
    iVar3 = FUN__text__00309d5c(*puVar2);
    if (iVar3 == 0x94c170) {
      lVar4 = FUN__text__00309d7c(*puVar2);
      if (lVar4 != 0) {
        iVar3 = FUN__text__00305840();
        if (iVar3 == 0) {
          return lVar4;
        }
      }
    }
    uVar5 = *puVar1;
    local_68[0] = 0;
    uVar6 = *puVar2;
    *(undefined2 *)(&DAT_0094c1ca + param_1) = 0;
    *(undefined8 *)(&DAT_0094c1c2 + param_1) = 0;
    auVar7 = FUN__text__0011b95c(uVar5);
    local_70 = 0x10015f008c54000;
    local_80 = auVar7;
    std::string::assign((char *)local_68);
    FUN__text__00309ac0(uVar6,local_80);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    memset((void *)(param_1 + 0x50),0,0x94c171);
  }
  return 0;
}


