/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633f70; name: FUN_.text__00633f70
 */


void FUN__text__00633f70(long param_1,ushort param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  bool bVar7;
  
  uVar6 = (ulong)param_2;
  iVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),0,*(undefined1 *)(param_1 + 0x54));
  uVar1 = *(undefined4 *)(uVar6 * 4 + 0x75ac3c);
  if ((param_2 == 0) || (iVar3 != 0xb8)) {
    if ((param_2 != 1) && (iVar3 == 0x22e)) {
      uVar4 = 0x22e;
      goto LAB__text__00633fe4;
    }
    if ((param_2 == 2) || (iVar3 != 0x22f)) goto LAB__text__00634000;
    FUN__text__006342d0(param_1,0x22f,uVar1,param_3);
    uVar5 = *(undefined4 *)(uVar6 * 4 + 0x75ac48);
  }
  else {
    uVar4 = 0xb8;
LAB__text__00633fe4:
    FUN__text__006342d0(param_1,uVar4,uVar1,param_3);
LAB__text__00634000:
    uVar5 = *(undefined4 *)(uVar6 * 4 + 0x75ac48);
    if ((param_2 == 0) || (iVar3 != 0x225)) {
      if ((param_2 == 1) || (iVar3 != 0x22a)) {
        if (iVar3 != 0x229 || param_2 == 2) goto LAB__text__00634094;
        uVar4 = 0x229;
      }
      else {
        uVar4 = 0x22a;
      }
    }
    else {
      uVar4 = 0x225;
    }
    FUN__text__006342d0(param_1,uVar4,uVar5,param_3);
  }
LAB__text__00634094:
  bVar7 = param_2 == 2;
  iVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),1,*(undefined1 *)(param_1 + 0x54));
  if ((param_2 == 0) || (iVar3 != 0xb8)) {
    if ((param_2 != 1) && (iVar3 == 0x22e)) {
      uVar4 = 0x22e;
      goto LAB__text__006340fc;
    }
    if (iVar3 == 0x22f && !bVar7) {
      uVar4 = 0x22f;
      goto LAB__text__006340fc;
    }
    if ((param_2 != 0) && (iVar3 == 0x225)) {
      uVar4 = 0x225;
LAB__text__00634274:
      uVar2 = uVar5;
      goto LAB__text__00634104;
    }
    if ((param_2 != 1) && (iVar3 == 0x22a)) {
      uVar4 = 0x22a;
      goto LAB__text__00634274;
    }
    if (iVar3 == 0x229 && !bVar7) {
      uVar4 = 0x229;
      goto LAB__text__00634274;
    }
  }
  else {
    uVar4 = 0xb8;
LAB__text__006340fc:
    uVar2 = uVar1;
LAB__text__00634104:
    FUN__text__006342d0(param_1,uVar4,uVar2,param_3);
  }
  iVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),2,*(undefined1 *)(param_1 + 0x54));
  if ((param_2 == 0) || (iVar3 != 0xb8)) {
    if ((param_2 != 1) && (iVar3 == 0x22e)) {
      uVar4 = 0x22e;
      goto LAB__text__00634174;
    }
    if (iVar3 == 0x22f && !bVar7) {
      uVar4 = 0x22f;
      goto LAB__text__00634174;
    }
    if ((param_2 != 0) && (iVar3 == 0x225)) {
      uVar4 = 0x225;
LAB__text__00634290:
      uVar2 = uVar5;
      goto LAB__text__0063417c;
    }
    if ((param_2 != 1) && (iVar3 == 0x22a)) {
      uVar4 = 0x22a;
      goto LAB__text__00634290;
    }
    if (iVar3 == 0x229 && !bVar7) {
      uVar4 = 0x229;
      goto LAB__text__00634290;
    }
  }
  else {
    uVar4 = 0xb8;
LAB__text__00634174:
    uVar2 = uVar1;
LAB__text__0063417c:
    FUN__text__006342d0(param_1,uVar4,uVar2,param_3);
  }
  iVar3 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),3,*(undefined1 *)(param_1 + 0x54));
  if ((param_2 == 0) || (iVar3 != 0xb8)) {
    if ((param_2 == 1) || (iVar3 != 0x22e)) {
      if (iVar3 != 0x22f || bVar7) {
        if ((param_2 == 0) || (iVar3 != 0x225)) {
          if ((param_2 == 1) || (iVar3 != 0x22a)) {
            if (iVar3 != 0x229 || bVar7) {
              return;
            }
            uVar4 = 0x229;
          }
          else {
            uVar4 = 0x22a;
          }
        }
        else {
          uVar4 = 0x225;
        }
        goto LAB__text__006341f4;
      }
      uVar4 = 0x22f;
    }
    else {
      uVar4 = 0x22e;
    }
  }
  else {
    uVar4 = 0xb8;
  }
  uVar5 = uVar1;
LAB__text__006341f4:
  FUN__text__006342d0(param_1,uVar4,uVar5,param_3);
  return;
}


