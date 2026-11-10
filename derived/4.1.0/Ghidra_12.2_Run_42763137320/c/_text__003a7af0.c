/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a7af0; name: FUN_.text__003a7af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003a7af0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long local_50;
  long local_48;
  
  FUN__text__003a1464();
  lVar3 = _DAT_008a34f8;
  local_50 = param_1[1];
  param_1[0x46] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x14] = lVar3 + 400;
  *param_1 = lVar3 + 0x10;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[9] = lVar3 + 0x128;
  param_1[10] = lVar3 + 0x168;
  param_1[0x80] = 0x320000001e;
  param_1[0x89] = 0x179844386f2820d1;
  param_1[0x8b] = 0x18;
  param_1[0x8a] = 0x719e7a;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN__text__003a7e1c(&local_48,local_50,&local_50);
  if (param_1[0x7a] != 0) {
    (**(code **)(*(long *)(param_1[0x7a] + 0x48) + 0x18))();
  }
  plVar2 = (long *)param_1[1];
  param_1[0x7a] = local_48;
  puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x60,8);
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) != 0x10) {
    *(long **)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8) = plVar2;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *puVar1 = 0x882780;
    puVar1[1] = 0;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    lVar3 = param_1[0x81];
    param_1[0x81] = (long)puVar1;
    if (lVar3 != 0) {
      FUN__text__003a6efc(lVar3);
      (**(code **)(*(long *)param_1[0x82] + 0x18))
                ((long *)param_1[0x82],lVar3,param_1[0x83],param_1[0x84]);
    }
    param_1[0x82] = (long)plVar2;
    plVar2 = (long *)param_1[1];
    param_1[0x83] = 0x60;
    param_1[0x84] = 8;
    puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x10,8);
    if (*(long *)(uVar5 + 0x98) != 0x10) {
      *(long **)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8) = plVar2;
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
      plVar4 = (long *)param_1[0x85];
      param_1[0x85] = (long)puVar1;
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        (**(code **)(*(long *)param_1[0x86] + 0x18))
                  ((long *)param_1[0x86],plVar4,param_1[0x87],param_1[0x88]);
        puVar1 = (undefined8 *)param_1[0x85];
      }
      param_1[0x86] = (long)plVar2;
      param_1[0x87] = 0x10;
      param_1[0x88] = 8;
      puVar1[1] = param_1 + 0x14;
      *(undefined4 *)(param_1 + 0x76) = 0;
      *(undefined4 *)(param_1[0x81] + 0x14) = 0;
      *(undefined4 *)(param_1[0x81] + 0x18) = 0;
      *(undefined1 *)((long)param_1 + 0x3cc) = 0;
      plVar2 = (long *)param_1[0x85];
      FUN__text__003aa314(&local_48,param_1[1]);
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
      }
      *plVar2 = local_48;
      *(long *)(local_48 + 0x60) = plVar2[1];
      if (*plVar2 != 0) {
        plVar2 = (long *)(*(code *)**(undefined8 **)(*plVar2 + 0x50))();
        plVar4 = (long *)FUN__text__003a9e38();
        if (plVar4 != plVar2) {
          do {
            plVar2 = (long *)*plVar2;
          } while (plVar2 != plVar4 && plVar2 != (long *)0x0);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


