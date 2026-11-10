/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00522FFC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00622ffc; name: FUN_.text__00622ffc
 */


void FUN__text__00622ffc(undefined8 param_1,undefined8 *param_2,byte param_3,byte param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_70 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte local_6c [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 != param_4) && ((param_4 | param_3) < 4)) { // [自动静态注释] 条件判断/分支
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0]._0_1_ = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (*(code *)*param_2)(param_2 + 4,&local_68,local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0]._0_1_ = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = (*(code *)param_2[0x20])(param_2 + 0x24,&local_68,local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0]._0_1_ = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar2 = (*(code *)param_2[0x40])(param_2 + 0x44,&local_68,local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0] = CONCAT11(local_70[0]._1_1_,param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0] = (*(code *)*param_2)(param_2 + 4,&local_68,local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_6c[0] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)param_2[0x10])(param_2 + 0x14,&local_68,local_6c,local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0]._0_1_ = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_6c[0] = (*(code *)param_2[0x20])(param_2 + 0x24,&local_68,local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0]._0_1_ = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)param_2[0x30])(param_2 + 0x34,&local_68,local_70,local_6c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0]._0_1_ = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_6c[0] = (*(code *)param_2[0x40])(param_2 + 0x44,&local_68,local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0] = CONCAT11(local_70[0]._1_1_,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)param_2[0x50])(param_2 + 0x54,&local_68,local_70,local_6c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_70[0] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_6c[0] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)param_2[0x10])(param_2 + 0x14,&local_68,local_6c,local_70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_6c[0] = bVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_70[0]._0_1_ = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)param_2[0x50])(param_2 + 0x54,&local_68,local_70,local_6c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_70[0] = CONCAT11(local_70[0]._1_1_,param_4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_6c[0] = bVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*(code *)param_2[0x30])(param_2 + 0x34,&local_68,local_70,local_6c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


