/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a8720; name: FUN_.text__001a8720
 */


uint FUN__text__001a8720(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  lVar5 = FUN__text__00195844(uVar8,*(undefined4 *)(param_1 + 0x24));
  puVar2 = (undefined4 *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x90) != '\0') {
    puVar2 = (undefined4 *)(param_1 + 0x94);
  }
  lVar6 = FUN__text__00195844(uVar8,*puVar2);
  if ((lVar5 == lVar6 || *(int *)(lVar5 + 0xc) != 1) || *(int *)(lVar6 + 0xc) == 1) {
    uVar3 = 0;
  }
  else {
    lVar10 = 0;
    uVar3 = 0;
    lVar5 = param_1 + 0x20;
    do {
      lVar1 = param_1 + 0x6d + lVar10;
      uVar9 = (undefined4)lVar10;
      if (*(char *)(lVar1 + -0x19) != '\0') {
        local_68 = 0;
        uStack_64 = uVar9;
        FUN__text__00191328(&local_7c,lVar5,&local_68);
        if (uVar3 == 0) {
          local_80 = local_6c;
          local_90 = local_7c;
          uStack_88 = local_74;
          uVar3 = FUN__text__001aa15c(lVar7,&local_90,*(undefined4 *)(lVar6 + 0xc));
        }
        else {
          uVar3 = 1;
        }
        uVar3 = uVar3 & 1;
      }
      if (*(char *)(lVar1 + -0x14) != '\0') {
        uVar4 = 1;
        local_68 = 1;
        uStack_64 = uVar9;
        FUN__text__00191328(&local_7c,lVar5,&local_68);
        if (uVar3 == 0) {
          local_80 = local_6c;
          local_90 = local_7c;
          uStack_88 = local_74;
          uVar4 = FUN__text__001aa15c(lVar7,&local_90,*(undefined4 *)(lVar6 + 0xc));
        }
        uVar3 = uVar4 & 1;
      }
      if (*(char *)(lVar1 + -0xf) != '\0') {
        local_68 = 2;
        uStack_64 = uVar9;
        FUN__text__00191328(&local_7c,lVar5,&local_68);
        if (uVar3 == 0) {
          local_80 = local_6c;
          local_90 = local_7c;
          uStack_88 = local_74;
          uVar3 = FUN__text__001aa15c(lVar7,&local_90,*(undefined4 *)(lVar6 + 0xc));
        }
        else {
          uVar3 = 1;
        }
        uVar3 = uVar3 & 1;
      }
      if (*(char *)(lVar1 + -10) != '\0') {
        local_68 = 3;
        uStack_64 = uVar9;
        FUN__text__00191328(&local_7c,lVar5,&local_68);
        if (uVar3 == 0) {
          local_80 = local_6c;
          local_90 = local_7c;
          uStack_88 = local_74;
          uVar3 = FUN__text__001aa15c(lVar7,&local_90,*(undefined4 *)(lVar6 + 0xc));
        }
        else {
          uVar3 = 1;
        }
        uVar3 = uVar3 & 1;
      }
      if (*(char *)(lVar1 + -5) != '\0') {
        local_68 = 4;
        uStack_64 = uVar9;
        FUN__text__00191328(&local_7c,lVar5,&local_68);
        if (uVar3 == 0) {
          local_80 = local_6c;
          local_90 = local_7c;
          uStack_88 = local_74;
          uVar3 = FUN__text__001aa15c(lVar7,&local_90,*(undefined4 *)(lVar6 + 0xc));
        }
        else {
          uVar3 = 1;
        }
        uVar3 = uVar3 & 1;
      }
      if (*(char *)(param_1 + 0x6d + lVar10) != '\0') {
        local_68 = 5;
        uStack_64 = uVar9;
        FUN__text__00191328(&local_7c,lVar5,&local_68);
        if (uVar3 == 0) {
          local_80 = local_6c;
          local_90 = local_7c;
          uStack_88 = local_74;
          uVar3 = FUN__text__001aa15c(lVar7,&local_90,*(undefined4 *)(lVar6 + 0xc));
        }
        else {
          uVar3 = 1;
        }
        uVar3 = uVar3 & 1;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 5);
  }
  return uVar3;
}


