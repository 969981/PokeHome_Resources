/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C1E80
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1e80; name: FUN_.text__004c1e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c1e80(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pvVar3 = (void *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a4430 + 0x10;
  uVar4 = (ulong)*(uint *)(param_1 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 3) != 0) { // [自动静态注释] 条件判断/分支
    __dest = pvVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while (*(long *)((long)__dest + 0x20) != 0) { // [自动静态注释] 循环/迭代
        __dest = (void *)((long)__dest + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (__dest == (void *)((long)pvVar3 + uVar4 * 0x30)) goto LAB__text__004c1f14; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = (ulong)((int)uVar4 - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pvVar6 = (void *)((long)pvVar3 + uVar4 * 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (__dest < pvVar6) { // [自动静态注释] 条件判断/分支
        memmove(__dest,(void *)((long)__dest + 0x30),(ulong)(uint)((int)pvVar6 - (int)__dest)); // [自动静态注释] 内存复制、清零或移动
        uVar4 = (ulong)((int)param_1[3] - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pvVar3 = (void *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(int *)(param_1 + 3) = (int)uVar4;
    } while (__dest != (void *)((long)pvVar3 + uVar4 * 0x30)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004c1f14: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (pvVar3 != (void *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  plVar7 = param_1 + 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)*plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar2 != (long *)0x0) { // [自动静态注释] 循环/迭代
    plVar8 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = plVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar1 = plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((long *)*plVar7 != plVar2) { // [自动静态注释] 条件判断/分支
      plVar1 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *plVar1 = (long)plVar8;
    if ((long *)*param_1 == plVar2) { // [自动静态注释] 条件判断/分支
      *param_1 = 0;
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar5 + 0x18) = 0;
    FUN__text__00446af0(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00445db0(plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    plVar2 = plVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0;
  *plVar7 = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


