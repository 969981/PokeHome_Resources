/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002CE1E8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce1e8; name: FUN_.text__003ce1e8
 */


void FUN__text__003ce1e8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long *param_5,ulong param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__003ce2a0(&local_28,*(undefined8 *)(param_2 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_6 & 1) != 0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(local_28 + 0x70) = *(undefined8 *)(DAT_008e1518 + 0x248);
  } // [自动静态注释] 作用域/控制流边界
  local_48 = *param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003ceac4(lVar1,0,0,param_4,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_48 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = local_28;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


