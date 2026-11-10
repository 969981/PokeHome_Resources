/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002575d4; name: FUN_.text__002575d4
 */


/* WARNING: Removing unreachable block (ram,0x0025793c) */

void FUN__text__002575d4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  FUN__text__00322c10();
  lVar6 = *(long *)(param_1 + 0x640);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x6ec);
  local_38 = *(long *)(param_1 + 0xfe0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__0024efa0(lVar6,&local_38,param_1 + 0x1004,uVar1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  iVar2 = *(int *)(param_1 + 0x1004);
  *(bool *)(param_1 + 0x1008) = iVar2 == 0;
  iVar3 = 3;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x1000) = iVar3;
  FUN__text__00327990();
  FUN__text__003279a0(*(undefined4 *)(param_1 + 0x1000));
  *(byte *)(*(long *)(param_1 + 0x6f8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x6f8) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x700) + 0x58) = *(byte *)(*(long *)(param_1 + 0x700) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x708) + 0x58) = *(byte *)(*(long *)(param_1 + 0x708) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x710) + 0x58) = *(byte *)(*(long *)(param_1 + 0x710) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x718) + 0x58) = *(byte *)(*(long *)(param_1 + 0x718) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x780) + 0x58) = *(byte *)(*(long *)(param_1 + 0x780) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x788) + 0x58) = *(byte *)(*(long *)(param_1 + 0x788) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x790) + 0x58) = *(byte *)(*(long *)(param_1 + 0x790) + 0x58) & 0xfe
  ;
  *(byte *)(*(long *)(param_1 + 0x798) + 0x58) = *(byte *)(*(long *)(param_1 + 0x798) + 0x58) & 0xfe
  ;
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x720),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x728),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x730),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x738),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x740),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x748),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x750),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x758),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x760),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x768),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x770),0);
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x778),0);
  uVar4 = FUN__text__0012cb14(param_1 + 0x110,0x72c680);
  FUN__text__003a14e8(uVar4,0);
  uVar4 = FUN__text__0012cb14(param_1 + 0x110,0x72c678);
  FUN__text__003a14e8(uVar4,0);
  lVar6 = *(long *)(param_1 + 0xfe0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__00306a08(lVar6,2);
  if (*(uint *)(param_1 + 0x6e8) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0025780c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00257818 +
              (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0x6e8) + 0x72bf80) * 4))();
    return;
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x640) + 0x70);
  if (iVar3 == 1) {
    lVar5 = *(long *)(param_1 + 0xfe0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN__text__00306a08(lVar5,2);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  else if (iVar3 == 0) {
    FUN__text__00259238(param_1,4);
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


