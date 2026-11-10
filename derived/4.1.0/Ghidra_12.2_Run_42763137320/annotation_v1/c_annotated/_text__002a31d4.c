/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001A31D4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a31d4; name: FUN_.text__002a31d4
 */


void FUN__text__002a31d4(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_38 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__002a32ac(&local_40,param_5,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__002a33c8(param_1,local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    if ((0x27 < param_3) || (0x1d < param_4)) goto LAB__text__002a3284; // [自动静态注释] 条件判断/分支
LAB__text__002a3258: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005fc3e8(*(undefined8 *)(lVar1 + 0x58), // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_2 + (ulong)param_3 * 0x2850 + (ulong)param_4 * 0x158 + 0x54); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((param_3 < 0x28) && (param_4 < 0x1e)) goto LAB__text__002a3258; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__002a3284: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_40 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


