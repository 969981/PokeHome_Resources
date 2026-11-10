/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D8850
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8850; name: FUN_.text__003d8850
 */


undefined8 FUN__text__003d8850(long param_1,undefined4 *param_2,void *param_3,ulong param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = FUN__text__003e2e70(param_3,0x70f866,param_4 - (long)param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  __n = *(ulong *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = __n; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 <= (long)param_3 + __n) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar1 - (long)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (__n < uVar4) { // [自动静态注释] 条件判断/分支
    memset(*(void **)(param_1 + 8),0,__n); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    memcpy(*(void **)(param_1 + 8),param_3,uVar4); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  lVar3 = lVar3 - uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(param_1 + 8) = lVar2 + uVar4;
  *(long *)(param_1 + 0x10) = lVar3;
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar4;
  lVar2 = (long)param_3 + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0 && uVar1 == param_4) { // [自动静态注释] 条件判断/分支
    lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_2 + 2) = 0;
  *(long *)(param_2 + 4) = lVar2;
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


