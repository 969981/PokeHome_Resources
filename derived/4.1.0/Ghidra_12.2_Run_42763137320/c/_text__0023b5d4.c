/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023b5d4; name: FUN_.text__0023b5d4
 */


void FUN__text__0023b5d4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  FUN__text__001156d0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_38 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if (local_38 == 0) goto LAB__text__0023b630;
  }
  (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
LAB__text__0023b630:
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    if ((lVar3 != 0) && (*(long *)(param_1 + 0x650) != 0)) {
      plVar2 = (long *)(lVar3 + 0x48);
      local_40 = lVar3;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__0023b804(param_1,0,lVar1,&local_40);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      local_48 = lVar3;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__0023b968(param_1,1,lVar1,&local_48);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      local_50 = lVar3;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__0023bacc(param_1,2,lVar1,&local_50);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      local_58 = lVar3;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__0023bc30(param_1,3,lVar1,&local_58);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      local_60 = lVar3;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__0023bd94(param_1,4,lVar1,&local_60);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      local_68 = lVar3;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__0023bef8(param_1,5,lVar1,&local_68);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN__text__003c7c60(lVar1,0x72b9b0,1);
      FUN__text__0023c05c(param_1,lVar1);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


