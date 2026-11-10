/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012e130; name: FUN_.text__0012e130
 */


void FUN__text__0012e130(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar5 = *param_2;
  *param_2 = 0;
  uVar1 = *(uint *)(lVar5 + 0xe8);
  if ((ulong)uVar1 != 0) {
    lVar10 = *param_1;
    uVar9 = 0;
    do {
      if (((uVar9 < *(ulong *)(lVar5 + 0xe8)) &&
          (*(char *)(*(long *)(lVar5 + 0xe0) + uVar9 * 0x18 + 0x10) == '\0')) &&
         (lVar7 = *(long *)(*(long *)(lVar5 + 0xe0) + uVar9 * 0x18 + 8), lVar7 != 0)) {
        plVar6 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar2 = *(long *)(lVar10 + 0x20);
        if (*(int *)(lVar2 + 0xc90) != 0) {
          uVar8 = 0;
          do {
            lVar2 = FUN__text__001273d4(lVar2,uVar8);
            uVar3 = FUN__text__005a8324(*(undefined8 *)(lVar2 + 8));
            uVar4 = FUN__text__001273f0(*(undefined8 *)(lVar10 + 0x20),uVar8);
            FUN__text__003e6e68(lVar7,uVar3,uVar4);
            lVar2 = *(long *)(lVar10 + 0x20);
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(lVar2 + 0xc90));
        }
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar1);
    if (lVar5 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0012e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


