/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00622ffc; name: FUN_.text__00622ffc
 */


void FUN__text__00622ffc(undefined8 param_1,undefined8 *param_2,byte param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 local_70 [2];
  byte local_6c [4];
  undefined8 local_68;
  
  if ((param_3 != param_4) && ((param_4 | param_3) < 4)) {
    local_68 = param_1;
    local_70[0]._0_1_ = param_3;
    uVar3 = (*(code *)*param_2)(param_2 + 4,&local_68,local_70);
    local_68 = param_1;
    local_70[0]._0_1_ = param_3;
    bVar1 = (*(code *)param_2[0x20])(param_2 + 0x24,&local_68,local_70);
    local_68 = param_1;
    local_70[0]._0_1_ = param_3;
    bVar2 = (*(code *)param_2[0x40])(param_2 + 0x44,&local_68,local_70);
    local_70[0] = CONCAT11(local_70[0]._1_1_,param_4);
    local_68 = param_1;
    local_70[0] = (*(code *)*param_2)(param_2 + 4,&local_68,local_70);
    local_6c[0] = param_3;
    local_68 = param_1;
    (*(code *)param_2[0x10])(param_2 + 0x14,&local_68,local_6c,local_70);
    local_68 = param_1;
    local_70[0]._0_1_ = param_4;
    local_6c[0] = (*(code *)param_2[0x20])(param_2 + 0x24,&local_68,local_70);
    local_68 = param_1;
    local_70[0]._0_1_ = param_3;
    (*(code *)param_2[0x30])(param_2 + 0x34,&local_68,local_70,local_6c);
    local_68 = param_1;
    local_70[0]._0_1_ = param_4;
    local_6c[0] = (*(code *)param_2[0x40])(param_2 + 0x44,&local_68,local_70);
    local_70[0] = CONCAT11(local_70[0]._1_1_,param_3);
    local_68 = param_1;
    (*(code *)param_2[0x50])(param_2 + 0x54,&local_68,local_70,local_6c);
    local_70[0] = uVar3;
    local_6c[0] = param_4;
    local_68 = param_1;
    (*(code *)param_2[0x10])(param_2 + 0x14,&local_68,local_6c,local_70);
    local_6c[0] = bVar2;
    local_68 = param_1;
    local_70[0]._0_1_ = param_4;
    (*(code *)param_2[0x50])(param_2 + 0x54,&local_68,local_70,local_6c);
    local_70[0] = CONCAT11(local_70[0]._1_1_,param_4);
    local_6c[0] = bVar1;
    local_68 = param_1;
    (*(code *)param_2[0x30])(param_2 + 0x34,&local_68,local_70,local_6c);
  }
  return;
}


