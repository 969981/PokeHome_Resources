/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000E9250
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e9250; name: FUN_.text__001e9250
 */


void FUN__text__001e9250(long param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (0x464 < ((uint)(param_2 >> 4) & 0xfffffff)) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = param_1 + (long)*(int *)(param_1 + 0x17c) * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x180) + (param_2 & 0xffffffff) * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(lVar1 + 0xbc) = uVar2;
  *(undefined4 *)(lVar1 + 0x11c) = uVar2;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)(**(code **)*puVar5)(puVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = (long *)FUN__text__0012615c(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar4 != plVar3) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  local_50 = 0x54b55ab916d8b464; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_48 = 0x717bd2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = 0x1b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)FUN__text__00137c10(puVar5[0xaf],&local_50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_38 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*plVar3 + 0x90))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0x98) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


