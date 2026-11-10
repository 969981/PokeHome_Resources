/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00151ee0; name: FUN_.text__00151ee0
 */


void FUN__text__00151ee0(long param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0x78) == -1) {
    FUN__text__005beb80(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0));
    lVar3 = *(long *)(param_1 + 0x28);
    uVar1 = FUN__text__005cd4dc(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0));
    local_24 = CONCAT22(local_24._2_2_,uVar1);
    uVar1 = FUN__text__005cd554(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0));
    local_28 = CONCAT22(local_28._2_2_,uVar1);
    FUN__text__005bea08(*(undefined8 *)(lVar3 + 0xb0),&local_24,&local_28);
    FUN__text__005bd83c(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0),param_1 + 0x34);
    local_24 = 1;
    FUN__text__005bea4c(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0),&local_24);
    local_24 = 0;
    FUN__text__005bdfd0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0),&local_24,param_1 + 0x30);
    local_24 = 0;
    local_28 = 0;
    lVar3 = *(long *)(param_1 + 0x28);
    iVar2 = FUN__text__005cd4dc(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0));
    local_2c = (float)iVar2;
    iVar2 = FUN__text__005cd554(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb0));
    local_30 = (float)iVar2;
    FUN__text__005bfdc4(*(undefined8 *)(lVar3 + 0xb0),&local_24,&local_28,&local_2c,&local_30);
    local_24 = 0;
    FUN__text__005bd83c(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0),&local_24);
  }
  return;
}


