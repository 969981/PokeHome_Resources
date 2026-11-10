/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001CC000
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002cc000; name: FUN_.text__002cc000
 */


uint FUN__text__002cc000(undefined8 param_1,byte *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_40 = strlen((char *)param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = 0xcbf29ce484222645; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (bVar1 != 0) { // [自动静态注释] 循环/迭代
    pbVar3 = pbVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = (local_50 ^ bVar1) * 0x100000001b3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = *pbVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbStack_48 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__002cbde0(param_1,&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar2 & 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


