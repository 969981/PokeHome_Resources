/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001ED768
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ed768; name: FUN_.text__002ed768
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ed768(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *_DAT_008a2580; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e927c(local_40,_DAT_008a2688); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = FUN__text__002f95a0(uVar1,local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_28 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  local_40[0] = param_1 + 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0x28b8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002ee9b0(uVar1,0x733974,local_40,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40[0] = param_1 + 0x2918; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0x808; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002ef070(uVar1,0x733978,local_40,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40[0] = param_1 + 0x3120; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002ef730(uVar1,0x73397c,local_40,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40[0] = param_1 + 0x31e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002efdf0(uVar1,0x733980,local_40,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_40[0] = param_1 + 0x3200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002f04b0(uVar1,0x733984,local_40,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


