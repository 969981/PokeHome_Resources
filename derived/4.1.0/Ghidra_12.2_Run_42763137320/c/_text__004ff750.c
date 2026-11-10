/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ff750; name: FUN_.text__004ff750
 */


bool FUN__text__004ff750(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_70 [32];
  undefined8 *local_50 [4];
  char local_18 [4];
  undefined1 auStack_14 [4];
  
  FUN__text__004e79f4(local_50,*param_2,(int)param_2[1]);
  uVar5 = (*(code *)*local_50[0])(local_50,auStack_14,4,auStack_70);
  if (((((uVar5 & 1) == 0) ||
       (uVar5 = (*(code *)*local_50[0])(local_50,param_1 + 0x28,4,auStack_70), (uVar5 & 1) == 0)) ||
      (uVar5 = (*(code *)*local_50[0])(local_50,param_1 + 0x2c,4,auStack_70), (uVar5 & 1) == 0)) ||
     ((uVar5 = (*(code *)*local_50[0])(local_50,local_18,1,auStack_70), (uVar5 & 1) == 0 ||
      (uVar5 = (*(code *)*local_50[0])(local_50,param_1 + 0x32,2,auStack_70), (uVar5 & 1) == 0)))) {
    bVar2 = false;
  }
  else {
    *(bool *)(param_1 + 0x30) = local_18[0] != '\0';
    lVar6 = *param_2;
    iVar3 = FUN__text__004e7a74(local_50);
    lVar1 = param_2[1];
    iVar4 = FUN__text__004e7a74(local_50);
    FUN__text__004e2bd8(auStack_70,lVar6 + iVar3,(int)lVar1 - iVar4);
    iVar3 = FUN__text__005016f0(param_1,auStack_70);
    bVar2 = iVar3 == 1;
    FUN__text__004e2bf8(auStack_70);
  }
  FUN__text__004e7a14(local_50);
  return bVar2;
}


