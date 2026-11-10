/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015a550; name: FUN_.text__0015a550
 */


void FUN__text__0015a550(undefined8 param_1,uint param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = -param_2;
  if (-1 < (int)param_2) {
    uVar9 = param_2;
  }
  FUN__text__005f33f0();
  lVar2 = 0x725190;
  if (param_5 != 0) {
    lVar2 = 0x7251a6;
  }
  if ((int)param_2 < 0) {
    uVar6 = 0x30fc;
    if (param_5 != 0) {
      uVar6 = 0x2d;
    }
    FUN__text__005f335c(param_1,uVar6);
  }
  uVar7 = *(uint *)((ulong)(param_3 - 1) * 4 + 0x7251bc);
  uVar5 = 0x3000;
  if (param_5 != 0) {
    uVar5 = 0x20;
  }
  do {
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = uVar9 / uVar7;
    }
    uVar3 = uVar3 & 0xffff;
    uVar8 = uVar3;
    if (9 < uVar3) {
      uVar8 = 10;
    }
    if (((param_4 == 2) || (uVar7 == 1)) || (uVar8 != 0)) {
      uVar4 = *(undefined2 *)(lVar2 + (ulong)uVar8 * 2);
      param_4 = 2;
LAB__text__0015a5f8:
      FUN__text__005f335c(param_1,uVar4);
    }
    else if (param_4 == 1) {
      uVar4 = uVar5;
      goto LAB__text__0015a5f8;
    }
    uVar9 = uVar9 - uVar3 * uVar7;
    bVar1 = uVar7 < 10;
    uVar7 = uVar7 / 10;
    if (bVar1) {
      return;
    }
  } while( true );
}


