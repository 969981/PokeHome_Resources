/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006503b4; name: FUN_.text__006503b4
 */


int FUN__text__006503b4(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 local_40 [16];
  
  lVar6 = *param_1;
  local_40 = FUN__text__0066c6a8();
  uVar1 = FUN__text__0064fa18(lVar6,local_40,1);
  if ((int)uVar1 < 0) {
    FUN__text__0066713c(lVar6,0x70dddb);
    iVar4 = 0x1c;
  }
  else {
    uVar2 = FUN__text__006544cc(*param_2);
    *(undefined4 *)(param_1 + 0x82) = uVar2;
    lVar5 = *param_2;
    param_1[0x4c] = -1;
    param_1[0xf] = lVar5;
    param_1[0x10] = 0;
    param_1[0x83] = (ulong)(uVar1 >> (*(long *)(lVar5 + 0x28) != 0));
    do {
      iVar3 = FUN__text__006504b0(param_1,lVar5,param_1 + 0x4c);
      if (iVar3 == 0) break;
      lVar5 = *(long *)(param_1[0xf] + 0x28);
      param_1[0xf] = lVar5;
    } while (lVar5 != 0);
    if ((int)param_1[0x4c] == -1) {
      iVar4 = 7;
      if (iVar3 != 0) {
        iVar4 = iVar3;
      }
    }
    else {
      *(long *)(lVar6 + 0x1630) = *(long *)(lVar6 + 0x1630) + 1;
      FUN__text__0065a050(*param_1,*(undefined8 *)(lVar6 + 0x7c0),4);
      iVar4 = 0;
    }
  }
  return iVar4;
}


