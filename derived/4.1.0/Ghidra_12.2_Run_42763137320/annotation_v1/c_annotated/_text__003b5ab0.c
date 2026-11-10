/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B5AB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b5ab0; name: FUN_.text__003b5ab0
 */


void FUN__text__003b5ab0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_18 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x48) = 0;
  if (0 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)) { // [自动静态注释] 条件判断/分支
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      while( true ) { // [自动静态注释] 循环/迭代
        local_38 = local_38 & 0xfffffffffffffffe; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar2 = *(undefined8 **)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1 = (undefined8 *)(puVar2[8] + puVar2[9] * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar2[9] == puVar2[10]) break; // [自动静态注释] 条件判断/分支
        if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *puVar2;
        *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
        *puVar1 = 0;
        puVar1[1] = local_38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
        puVar2[9] = puVar2[9] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar3 = iVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc) <= iVar3) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__003b6410(auStack_18,puVar2,puVar1,1,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar3 = iVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (iVar3 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


