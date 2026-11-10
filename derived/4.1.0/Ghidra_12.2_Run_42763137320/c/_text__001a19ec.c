/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a19ec; name: FUN_.text__001a19ec
 */


void FUN__text__001a19ec(long param_1,int param_2,undefined4 param_3,undefined8 *param_4,
                        undefined4 param_5,undefined1 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(int *)(param_1 + 0x200) = param_2;
  *(undefined4 *)(param_1 + 0x208) = param_3;
  uVar4 = *param_4;
  uVar5 = param_4[1];
  *(undefined4 *)(param_1 + 0x21c) = param_5;
  lVar2 = param_1 + (long)param_2 * 0x20;
  *(undefined1 *)(param_1 + 0x220) = param_6;
  *(undefined8 *)(param_1 + 0x20c) = uVar4;
  lVar1 = param_1 + (long)param_2 * 4;
  *(undefined8 *)(param_1 + 0x214) = uVar5;
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(lVar1 + 0x1bc);
  iVar7 = *(int *)(lVar1 + 0x1bc);
  if (iVar7 == 3) {
    uStack_40 = *(undefined8 *)(*(long *)(lVar2 + 0x68) + 0x5a60);
    local_38 = *(undefined4 *)(*(long *)(lVar2 + 0x68) + 0x5a68);
    uVar6 = FUN__text__00191358(&uStack_40);
    *(undefined4 *)(param_1 + (long)param_2 * 4 + 0x228) = uVar6;
    iVar7 = *(int *)(lVar1 + 0x1bc);
  }
  puVar3 = (undefined8 *)(lVar2 + 0xa8);
  if (iVar7 != 4) {
    puVar3 = (undefined8 *)(lVar2 + 0x68);
  }
  *(undefined8 *)(param_1 + 0x1f8) = *puVar3;
  FUN__text__001ca8a8();
  *(undefined4 *)(param_1 + 0x1f0) = 1;
  FUN__text__001ad460(*(undefined8 *)(param_1 + 0x48));
  return;
}


