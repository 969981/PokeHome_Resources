/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd648; name: FUN_.text__005dd648
 */


ulong FUN__text__005dd648(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  Uid *pUVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  long local_50;
  long local_48;
  
  if ((*(long *)(param_1 + 2) != 0) &&
     (*(int *)(*(long *)(param_1 + 2) + (long)(int)param_1[4] * 4) == 3)) {
    nn::account::GetLastOpenedUser((Uid *)&local_50);
    pUVar5 = (Uid *)(param_1 + 0x10);
    if ((local_50 == *(long *)pUVar5) &&
       ((local_48 == *(long *)(param_1 + 0x12) &&
        (iVar1 = nn::fs::EnsureSaveData(pUVar5), iVar1 != 0)))) goto LAB__text__005dd750;
    uVar3 = nn::fs::IsSaveDataExisting(param_2,pUVar5);
    if ((uVar3 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0xc) == 0) {
        iVar1 = nn::fs::MountSaveData(uVar8,param_2,pUVar5);
        if (iVar1 != 0) goto LAB__text__005dd750;
      }
      else {
        plVar7 = (long *)(*(long *)(param_1 + 0xc) + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        iVar1 = nn::fs::MountSaveData(uVar8,param_2,pUVar5);
        if (iVar1 != 0) {
LAB__text__005dd750:
          puVar4 = (uint *)nn::result::detail::OnUnhandledResult(iVar1);
          pcVar6 = *(char **)(puVar4 + 8);
          if (*(long *)(puVar4 + 0xc) == 0) {
            uVar3 = nn::fs::Commit(pcVar6);
            *puVar4 = (uint)uVar3;
            return uVar3;
          }
          plVar7 = (long *)(*(long *)(puVar4 + 0xc) + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          uVar2 = nn::fs::Commit(pcVar6);
          *puVar4 = uVar2;
          (**(code **)(*plVar7 + 0x18))(plVar7);
          return (ulong)uVar2;
        }
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      *(undefined4 *)(*(long *)(param_1 + 2) + (long)(int)param_1[4] * 4) = 2;
    }
    *param_1 = 0;
  }
  return 0;
}


