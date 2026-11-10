/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00629844; name: FUN_.text__00629844
 */


void FUN__text__00629844(long *param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined2 local_70;
  undefined1 local_6c [4];
  undefined8 local_68;
  
  local_68 = CONCAT44(local_68._4_4_,param_3);
  local_70 = local_70 & 0xff00;
  uVar1 = (**(code **)(*param_1 + 0x480))(*param_1 + 0x4a0,&local_68,&local_70);
  local_70 = local_70 & 0xff00;
  local_68 = param_2;
  uVar7 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
  if (param_3 != (uVar7 & 0xffff)) {
    local_70._0_1_ = 1;
    local_68 = param_2;
    uVar7 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
    if (param_3 != (uVar7 & 0xffff)) {
      local_70._0_1_ = 2;
      local_68 = param_2;
      uVar7 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
      if (param_3 != (uVar7 & 0xffff)) {
        local_70._0_1_ = 3;
        local_68 = param_2;
        uVar7 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
        if (param_3 != (uVar7 & 0xffff)) {
          local_70 = (ushort)local_70._1_1_ << 8;
          local_68 = param_2;
          sVar4 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
          if (sVar4 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
            local_70._0_1_ = 1;
            local_68 = param_2;
            sVar4 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
            if (sVar4 != 0) {
              uVar8 = 2;
              local_70._0_1_ = 2;
              local_68 = param_2;
              sVar4 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
              if (sVar4 != 0) {
                uVar8 = 3;
                local_70._0_1_ = 3;
                local_68 = param_2;
                sVar4 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
                if (sVar4 != 0) {
                  local_70._0_1_ = 1;
                  local_68 = param_2;
                  uVar5 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
                  local_70._0_1_ = 1;
                  local_68 = param_2;
                  uVar2 = (**(code **)(*param_1 + 0x100))(*param_1 + 0x120,&local_68,&local_70);
                  local_70 = CONCAT11(local_70._1_1_,1);
                  local_68 = param_2;
                  uVar3 = (**(code **)(*param_1 + 0x200))(*param_1 + 0x220,&local_68,&local_70);
                  local_6c[0] = 0;
                  local_70 = uVar5;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x80))(*param_1 + 0xa0,&local_68,local_6c,&local_70);
                  local_70 = local_70 & 0xff00;
                  local_6c[0] = uVar2;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x180))(*param_1 + 0x1a0,&local_68,&local_70,local_6c);
                  local_70 = local_70 & 0xff00;
                  local_6c[0] = uVar3;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x280))(*param_1 + 0x2a0,&local_68,&local_70,local_6c);
                  local_70._0_1_ = 2;
                  local_68 = param_2;
                  uVar6 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
                  local_70._0_1_ = 2;
                  local_68 = param_2;
                  uVar2 = (**(code **)(*param_1 + 0x100))(*param_1 + 0x120,&local_68,&local_70);
                  local_70 = CONCAT11(local_70._1_1_,2);
                  local_68 = param_2;
                  uVar3 = (**(code **)(*param_1 + 0x200))(*param_1 + 0x220,&local_68,&local_70);
                  local_6c[0] = 1;
                  local_70 = uVar6;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x80))(*param_1 + 0xa0,&local_68,local_6c,&local_70);
                  local_70._0_1_ = 1;
                  local_6c[0] = uVar2;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x180))(*param_1 + 0x1a0,&local_68,&local_70,local_6c);
                  local_70._0_1_ = 1;
                  local_6c[0] = uVar3;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x280))(*param_1 + 0x2a0,&local_68,&local_70,local_6c);
                  local_70._0_1_ = 3;
                  local_68 = param_2;
                  uVar6 = (**(code **)*param_1)((undefined8 *)*param_1 + 4,&local_68,&local_70);
                  local_70._0_1_ = 3;
                  local_68 = param_2;
                  uVar2 = (**(code **)(*param_1 + 0x100))(*param_1 + 0x120,&local_68,&local_70);
                  local_70 = CONCAT11(local_70._1_1_,3);
                  local_68 = param_2;
                  uVar3 = (**(code **)(*param_1 + 0x200))(*param_1 + 0x220,&local_68,&local_70);
                  local_6c[0] = 2;
                  local_70 = uVar6;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x80))(*param_1 + 0xa0,&local_68,local_6c,&local_70);
                  local_70._0_1_ = 2;
                  local_6c[0] = uVar2;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x180))(*param_1 + 0x1a0,&local_68,&local_70,local_6c);
                  local_70 = CONCAT11(local_70._1_1_,2);
                  local_6c[0] = uVar3;
                  local_68 = param_2;
                  (**(code **)(*param_1 + 0x280))(*param_1 + 0x2a0,&local_68,&local_70,local_6c);
                }
              }
            }
          }
          local_70 = (ushort)param_3;
          local_6c[0] = uVar8;
          local_68 = param_2;
          (**(code **)(*param_1 + 0x80))(*param_1 + 0xa0,&local_68,local_6c,&local_70);
          local_70 = CONCAT11(local_70._1_1_,uVar8);
          local_6c[0] = uVar1;
          local_68 = param_2;
          (**(code **)(*param_1 + 0x180))(*param_1 + 0x1a0,&local_68,&local_70,local_6c);
        }
      }
    }
  }
  return;
}


