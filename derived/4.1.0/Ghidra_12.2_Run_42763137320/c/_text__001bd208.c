/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bd208; name: FUN_.text__001bd208
 */


void FUN__text__001bd208(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x38);
  iVar1 = *(int *)(lVar7 + 0x1b0);
  iVar2 = *(int *)(lVar7 + 0x1b4);
  iVar3 = *(int *)(*(long *)(lVar7 + 0x128) + 0x24);
  lVar7 = *(long *)(param_1 + 8) + 0x110;
  uVar5 = FUN__text__0012cb14(lVar7,param_1 + 0xd0);
  FUN__text__003a14c4(uVar5,param_2);
  uVar5 = FUN__text__0012cb14(lVar7,param_1 + 0x140);
  FUN__text__003a14c4(uVar5,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x60);
  *(char *)(lVar6 + 0x83) = (char)param_2;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x1b0);
  *(char *)(lVar6 + 0x83) = (char)param_2;
  if (*(int *)(param_1 + 0x4cc) != 0) {
    FUN__text__003a14c4(lVar6,param_2 & 1);
  }
  uVar4 = (undefined1)(param_2 & 1);
  if (*(char *)(param_1 + 0x280) != '\0') {
    lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x288);
    *(undefined1 *)(lVar6 + 0x83) = uVar4;
    FUN__text__003a14c4(lVar6,param_2 & 1);
  }
  if (*(uint *)(param_1 + 0x30) == (uint)(iVar1 != iVar3 && iVar2 == iVar3)) {
    return;
  }
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x4f0);
  param_2 = param_2 & 1;
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x720);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x950);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xb80);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xdb0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xfe0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x560);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x790);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x9c0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xbf0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xe20);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x1050);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x5d0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x800);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xa30);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xc60);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xe90);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x10c0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x640);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x870);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xaa0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xcd0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xf00);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x1130);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x6b0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0x8e0);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xb10);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xd40);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar6 = FUN__text__0012cb14(lVar7,param_1 + 0xf70);
  *(undefined1 *)(lVar6 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar6,param_2);
  lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x11a0);
  *(undefined1 *)(lVar7 + 0x83) = uVar4;
  FUN__text__003a14c4(lVar7,param_2);
  return;
}


