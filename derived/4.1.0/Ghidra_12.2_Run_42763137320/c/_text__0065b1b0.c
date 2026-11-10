/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065b1b0; name: FUN_.text__0065b1b0
 */


/* WARNING: Removing unreachable block (ram,0x0065c00c) */
/* WARNING: Removing unreachable block (ram,0x0065c014) */
/* WARNING: Removing unreachable block (ram,0x0065c04c) */
/* WARNING: Removing unreachable block (ram,0x0065c01c) */
/* WARNING: Removing unreachable block (ram,0x0065c038) */

undefined8 FUN__text__0065b1b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_4 == 0) {
    uVar7 = 2;
  }
  else {
    uVar7 = 2;
    if (*(int *)(param_4 + 0x16f0) == -0x3f212453) {
      local_70 = param_2;
      uStack_68 = param_3;
      do {
        if ((*(long *)(param_4 + 0x10) == 0) && (*(int *)(param_4 + 0x60) - 3U < 0xd)) {
          FUN__text__0066713c(param_4,0x710862);
          return 4;
        }
        cVar2 = *(char *)(param_1 + 0xf0);
        *(undefined1 *)(param_1 + 0xf0) = 0;
        if (cVar2 != '\0') {
          FUN__text__0065cb00(param_1);
        }
        uVar6 = (ulong)*(uint *)(param_4 + 0x60);
        if (*(long **)(param_4 + 0x10) == (long *)0x0) {
LAB__text__0065b2b4:
          if ((uint)uVar6 < 0x13) {
                    /* WARNING: Could not emulate address calculation at 0x0065b2c8 */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (*(code *)(&UNK__text__0065b2d8 + (ulong)*(ushort *)(uVar6 * 2 + 0x76024c) * 4))
                              ();
            return uVar7;
          }
          return 4;
        }
        if (*(uint *)(param_4 + 0x60) - 3 < 0xe) {
          **(long **)(param_4 + 0x10) = param_4;
          uVar6 = (ulong)*(uint *)(param_4 + 0x60);
          if (*(long *)(param_4 + 0x10) == 0) goto LAB__text__0065b2b4;
        }
        if (0xe < (uint)uVar6 - 2) goto LAB__text__0065b2b4;
        iVar3 = FUN__text__0064fa18(param_4,&local_70,(uint)uVar6 < 9);
        uVar1 = *(uint *)(param_4 + 0x60);
        uVar6 = (ulong)uVar1;
        if (-1 < iVar3) goto LAB__text__0065b2b4;
        if (uVar1 == 4) {
          uVar4 = FUN__text__0066c6d8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                      *(undefined8 *)(param_4 + 0x1010));
          uVar7 = 0x71bbdf;
LAB__text__0065b760:
          FUN__text__0066713c(param_4,uVar7,uVar4);
        }
        else {
          if (uVar1 == 3) {
            uVar4 = FUN__text__0066c6d8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                        *(undefined8 *)(param_4 + 0x1010));
            uVar7 = 0x71c5c8;
            goto LAB__text__0065b760;
          }
          lVar8 = *(long *)(param_4 + 0xf0);
          uVar4 = FUN__text__0066c6d8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                      *(undefined8 *)(param_4 + 0x1010));
          if (lVar8 == -1) {
            FUN__text__0066713c(param_4,0x7180fb,uVar4,*(undefined8 *)(param_4 + 0x100));
          }
          else {
            FUN__text__0066713c(param_4,0x70de1a,uVar4,*(undefined8 *)(param_4 + 0x100),
                                *(undefined8 *)(param_4 + 0xf0));
          }
        }
        uVar1 = *(uint *)(param_4 + 0x60);
        if (9 < uVar1) {
          FUN__text__00650d38(*(undefined8 *)(param_4 + 0x10),2);
        }
        FUN__text__0065a554(param_4,0x1c,1);
        iVar3 = 0;
        uVar5 = *(uint *)(param_4 + 0x60);
        if (uVar5 < 0x11) {
          FUN__text__0065cb00(param_1);
          if (*(long *)(param_4 + 0x10) == 0) {
            iVar3 = *(int *)(param_4 + 0x60);
            if (iVar3 == 2) {
              FUN__text__0066dd80(param_4);
              goto LAB__text__0065c068;
            }
          }
          else {
            FUN__text__00665998();
            FUN__text__00665dac(*(undefined8 *)(param_4 + 0x10));
            FUN__text__006706dc(param_4,*(long *)(param_4 + 0x10) + 0x4a8);
            FUN__text__006706dc(param_4,*(long *)(param_4 + 0x10) + 0x4c8);
            if (9 < uVar1) {
              FUN__text__00670414(param_4,*(undefined8 *)(param_4 + 0x10),1);
              *(undefined8 *)(param_4 + 0x10) = 0;
            }
LAB__text__0065c068:
            iVar3 = *(int *)(param_4 + 0x60);
          }
          if (iVar3 != 0x11) {
            *(undefined4 *)(param_4 + 0x60) = 0x11;
            *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) + -1;
            *(undefined8 *)(param_4 + 0x10) = 0;
            FUN__text__0065a4c8(param_4);
          }
          iVar3 = -1;
          uVar5 = *(uint *)(param_4 + 0x60);
        }
        if (uVar5 == 0x11) {
          if (*(code **)(param_4 + 0xf18) == (code *)0x0) {
            *(long *)(param_4 + 0x88) = param_4;
            *(undefined4 *)(param_4 + 0x80) = 1;
            *(undefined4 *)(param_4 + 0x90) = 0x1c;
            FUN__text__00656b20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4 + 0x68,
                                param_4 + 0x68);
            iVar3 = 0;
          }
          else {
            (**(code **)(param_4 + 0xf18))(param_4,0x1c);
          }
          if (*(int *)(param_4 + 0x60) != 0x12) {
            *(undefined4 *)(param_4 + 0x60) = 0x12;
          }
        }
      } while ((iVar3 == -1) || (*(char *)(param_1 + 0xf0) != '\0'));
      uVar7 = 0;
      *(undefined4 *)(param_4 + 100) = 0x1c;
    }
  }
  return uVar7;
}


