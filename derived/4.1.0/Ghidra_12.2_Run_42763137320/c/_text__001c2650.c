/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c2650; name: FUN_.text__001c2650
 */


void FUN__text__001c2650(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x10);
  lVar9 = 0;
  bVar3 = true;
  do {
    bVar2 = bVar3;
    if (*(char *)(param_1 + lVar9 * 0x38 + 0x20) != '\0') {
      lVar4 = param_1 + lVar9 * 0x38;
      lVar7 = lVar4 + 0x24;
      lVar4 = FUN__text__00195844(uVar8,*(undefined4 *)(lVar4 + 0x28));
      if (*(int *)(lVar4 + 0xc) == 1) {
        lVar4 = 0;
        lVar9 = param_1 + 0x51 + lVar9 * 0x38;
        do {
          lVar1 = lVar9 + lVar4;
          uVar6 = (undefined4)lVar4;
          if (*(char *)(lVar1 + -0x19) != '\0') {
            local_7c = 0;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar1 + -0x14) != '\0') {
            local_7c = 1;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar1 + -0xf) != '\0') {
            local_7c = 2;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar1 + -10) != '\0') {
            local_7c = 3;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar1 + -5) != '\0') {
            local_7c = 4;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar9 + lVar4) != '\0') {
            local_7c = 5;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            FUN__text__0019555c(uVar8,&local_74);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 != 5);
      }
      else {
        lVar4 = 0;
        lVar9 = param_1 + 0x51 + lVar9 * 0x38;
        do {
          lVar1 = lVar9 + lVar4;
          uVar6 = (undefined4)lVar4;
          if (*(char *)(lVar1 + -0x19) != '\0') {
            local_7c = 0;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            local_90 = local_74;
            uStack_88 = local_6c;
            local_80 = local_64;
            FUN__text__001aa7a0(lVar5,&local_90);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar1 + -0x14) != '\0') {
            local_7c = 1;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            local_90 = local_74;
            uStack_88 = local_6c;
            local_80 = local_64;
            FUN__text__001aa7a0(lVar5,&local_90);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar1 + -0xf) != '\0') {
            local_7c = 2;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            local_90 = local_74;
            uStack_88 = local_6c;
            local_80 = local_64;
            FUN__text__001aa7a0(lVar5,&local_90);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar1 + -10) != '\0') {
            local_7c = 3;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            local_90 = local_74;
            uStack_88 = local_6c;
            local_80 = local_64;
            FUN__text__001aa7a0(lVar5,&local_90);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar1 + -5) != '\0') {
            local_7c = 4;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            local_90 = local_74;
            uStack_88 = local_6c;
            local_80 = local_64;
            FUN__text__001aa7a0(lVar5,&local_90);
            FUN__text__0019555c(uVar8,&local_74);
          }
          if (*(char *)(lVar9 + lVar4) != '\0') {
            local_7c = 5;
            uStack_78 = uVar6;
            FUN__text__00191328(&local_74,lVar7,&local_7c);
            local_90 = local_74;
            uStack_88 = local_6c;
            local_80 = local_64;
            FUN__text__001aa7a0(lVar5,&local_90);
            FUN__text__0019555c(uVar8,&local_74);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 != 5);
      }
    }
    lVar9 = 1;
    bVar3 = false;
  } while (bVar2);
  if (**(int **)(lVar5 + 0x38) == 1) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      lVar7 = 0;
      lVar9 = param_1 + 0x24;
      do {
        lVar4 = param_1 + 0x51 + lVar7;
        uVar6 = (undefined4)lVar7;
        if (*(char *)(lVar4 + -0x19) != '\0') {
          local_7c = 0;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(lVar4 + -0x14) != '\0') {
          local_7c = 1;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(lVar4 + -0xf) != '\0') {
          local_7c = 2;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(lVar4 + -10) != '\0') {
          local_7c = 3;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(lVar4 + -5) != '\0') {
          local_7c = 4;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(param_1 + 0x51 + lVar7) != '\0') {
          local_7c = 5;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 5);
    }
    if (*(char *)(param_1 + 0x58) != '\0') {
      lVar7 = 0;
      lVar9 = param_1 + 0x5c;
      do {
        uVar6 = (undefined4)lVar7;
        if (*(char *)(param_1 + 0x70 + lVar7) != '\0') {
          local_7c = 0;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        lVar4 = param_1 + 0x70 + lVar7;
        if (*(char *)(lVar4 + 5) != '\0') {
          local_7c = 1;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(lVar4 + 10) != '\0') {
          local_7c = 2;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(lVar4 + 0xf) != '\0') {
          local_7c = 3;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(lVar4 + 0x14) != '\0') {
          local_7c = 4;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        if (*(char *)(lVar4 + 0x19) != '\0') {
          local_7c = 5;
          uStack_78 = uVar6;
          FUN__text__00191328(&local_74,lVar9,&local_7c);
          FUN__text__001aaaf4(lVar5,&local_74);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 5);
    }
  }
  return;
}


