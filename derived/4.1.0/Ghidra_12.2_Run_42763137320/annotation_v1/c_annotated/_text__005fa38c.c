/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004FA38C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fa38c; name: FUN_.text__005fa38c
 */


void FUN__text__005fa38c(undefined8 *param_1,int *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = param_1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = param_2;
  if ((param_2 == (int *)0x0) || (*(ushort *)((long)param_2 - (long)*param_2) < 5)) { // [自动静态注释] 条件判断/分支
    FUN__text__005fa4a0(puVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    piVar4 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005fa4a0(puVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar4 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar1 = (uint *)((long)param_2 + uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005fa4a0(puVar2,(long)puVar1 + (ulong)*puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar4 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (piVar4 != (int *)0x0) { // [自动静态注释] 条件判断/分支
    if ((6 < *(ushort *)((long)piVar4 - (long)*piVar4)) && // [自动静态注释] 条件判断/分支
       (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar3 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = (uint *)((long)piVar4 + uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005fb110(param_1 + 0xd,(long)puVar1 + (ulong)*puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      piVar4 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x005fa424; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005fb110(param_1 + 0xd,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  piVar4 = (int *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x005fa424: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 9)) || // [自动静态注释] 条件判断/分支
     (uVar3 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar3 == 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__005fa4a0(param_1 + 0x19,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar1 = (uint *)((long)piVar4 + uVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005fa4a0(param_1 + 0x19,(long)puVar1 + (ulong)*puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


