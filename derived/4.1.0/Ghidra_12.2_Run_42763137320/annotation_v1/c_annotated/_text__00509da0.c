/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00409DA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00509da0; name: FUN_.text__00509da0
 */


void FUN__text__00509da0(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(param_1 + 1) != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = (ulong)*(uint *)(param_1 + 1) * 0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        (**(code **)*puVar1)(puVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = lVar2 + -0x50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1 = puVar1 + 10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar2 != 0); // [自动静态注释] 循环/迭代
      puVar1 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0xb,puVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar3 = (long *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(param_1 + 3) != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = (ulong)*(uint *)(param_1 + 3) << 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(plVar3 + 1) = 0;
          FUN__text__00400fc0(0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
          *plVar3 = 0;
          *(undefined4 *)((long)plVar3 + 0xc) = 0;
        } // [自动静态注释] 作用域/控制流边界
        plVar3 = plVar3 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar2 = lVar2 + -0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar2 != 0); // [自动静态注释] 循环/迭代
      plVar3 = (long *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(10,plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  param_1[2] = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)(param_2 + 4) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


