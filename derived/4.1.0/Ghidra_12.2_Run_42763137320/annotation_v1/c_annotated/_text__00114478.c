/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00014478
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00114478; name: FUN_.text__00114478
 */


void FUN__text__00114478(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(undefined8 *)(param_1 + 0x180); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = *(long **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long **)(param_1 + 0x178) != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar1 = *(long **)(param_1 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar2,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_1 + 400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 400) = uVar3;
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x198) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_1 + 0x198),lVar4,*(undefined8 *)(param_1 + 0x1a0), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1 + 0x1a8));
    uVar3 = *(undefined8 *)(param_1 + 400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(param_1 + 0x198) = plVar1;
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  *(undefined8 *)(param_1 + 0x1a8) = 0x10;
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x180) & (long)*(ulong *)(param_1 + 0x180) >> 0x3f;
  FUN__text__005d8f28(param_1,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


