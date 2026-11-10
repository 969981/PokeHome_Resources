/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001afb3c; name: FUN_.text__001afb3c
 */


void FUN__text__001afb3c(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long local_48;
  
  lVar9 = *(long *)(param_1 + 0x18);
  if ((lVar9 != 0) && (lVar7 = *(long *)(lVar9 + 0x118), lVar7 != 0)) {
    lVar10 = *(long *)(param_1 + 8);
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if (*(long *)(lVar9 + 0x10) != 0) {
      lVar5 = *(long *)(param_1 + 0x1b0);
      lVar9 = 0;
      if ((lVar5 != -0x340d631b7bddd9bb) && (lVar5 != 0)) {
        local_48 = lVar5;
        lVar9 = FUN__text__00155100(*(undefined8 *)(lVar10 + 0x2d0),&local_48);
      }
      lVar6 = *(long *)(param_1 + 0x1b8);
      lVar5 = 0;
      if ((lVar6 != -0x340d631b7bddd9bb) && (lVar6 != 0)) {
        local_48 = lVar6;
        lVar5 = FUN__text__00155100(*(undefined8 *)(lVar10 + 0x2d0),&local_48);
      }
      if ((lVar9 != 0) && (lVar5 != 0)) {
        if (((*param_2 == 0) || (uVar3 = FUN__text__00306588(), (uVar3 & 1) != 0)) ||
           (iVar1 = FUN__text__00308390(*param_2), iVar1 != 0)) {
          if (param_3 < 0xd) {
            uVar3 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
            uVar4 = *(undefined4 *)(uVar3 + 0x725dc8);
            uVar2 = *(undefined4 *)(uVar3 + 0x725dfc);
          }
          else {
            uVar4 = 0;
            uVar2 = 0;
          }
        }
        else {
          uVar2 = FUN__text__003cde90((ulong)param_3);
          uVar4 = 0;
        }
        FUN__text__003cdea0(lVar7,uVar4,lVar9,0,0);
        FUN__text__003cdea0(lVar7,uVar2,lVar5,0,0);
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))(plVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


