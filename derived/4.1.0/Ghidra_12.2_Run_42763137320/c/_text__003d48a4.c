/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d48a4; name: FUN_.text__003d48a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d48a4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  FUN__text__005c5640(param_1,0);
  lVar3 = _DAT_008a3768;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = lVar3 + 0x10;
  param_1[9] = lVar3 + 0xa0;
  param_1[10] = lVar3 + 0xe0;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x30,8);
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0x884c00;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x10001;
  *(undefined2 *)((long)puVar1 + 0x24) = 1;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  lVar3 = param_1[0x27];
  param_1[0x27] = (long)puVar1;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    (**(code **)(*(long *)param_1[0x28] + 0x18))
              ((long *)param_1[0x28],lVar3,param_1[0x29],param_1[0x2a]);
  }
  param_1[0x28] = (long)param_2;
  param_1[0x29] = 0x30;
  param_1[0x2a] = 8;
  return;
}


