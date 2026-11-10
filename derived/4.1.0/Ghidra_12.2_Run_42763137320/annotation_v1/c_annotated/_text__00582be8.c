/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00482BE8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00582be8; name: FUN_.text__00582be8
 */


void FUN__text__00582be8(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  cVar2 = *(char *)(param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(ushort *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (uint)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (cVar2 != '\0') { // [自动静态注释] 条件判断/分支
    uVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 <= uVar6) { // [自动静态注释] 条件判断/分支
      uVar6 = (uint)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
    pcVar5 = *(code **)(param_1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x90) >> 1)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ulong *)(param_1 + 0x90) & 1) != 0) { // [自动静态注释] 条件判断/分支
      pcVar5 = *(code **)(pcVar5 + *plVar1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (*pcVar5)(plVar1,*param_2,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(short *)((long)param_2 + 0x12) = (short)uVar6;
    cVar2 = *(char *)(param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = 0x2d; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (cVar2 != '\0' && *(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0x10)) { // [自动静态注释] 条件判断/分支
    uVar4 = 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)param_2 + 0xc) = uVar4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


