/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002024AC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003024ac; name: FUN_.text__003024ac
 */


undefined4 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__003024ac(undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002a32ac(&local_40,param_3,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002a33c8(&local_48,local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_50 = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48 == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__00302180(param_1,param_2,&local_50,param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = (long *)(local_48 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar2 + 0x10))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = FUN__text__00302180(param_1,param_2,&local_50,param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    (**(code **)(*plVar2 + 0x18))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (local_40 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


