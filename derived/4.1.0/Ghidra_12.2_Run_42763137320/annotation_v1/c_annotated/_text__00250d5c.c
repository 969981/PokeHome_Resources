/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00150D5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00250d5c; name: FUN_.text__00250d5c
 */


void FUN__text__00250d5c(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_50 = 0x94f0ab6b70e7ac3f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0x719f5d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0x1c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00115650(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_50,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = *(long *)(local_18 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (local_18 == 0) goto LAB__text__00250de8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(local_18 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__00250de8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(int *)(param_1 + (ulong)param_2 * 4 + 0x648) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x00250e1c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00250e2c + (ulong)*(byte *)((ulong)uVar1 + 0x72be4f) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


