/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C4510
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c4510; name: FUN_.text__004c4510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004c4510(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = (undefined8 *)FUN__text__00400f80(0x10,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined1 *)(puVar4 + 4) = 0xff;
    *(undefined1 *)(puVar4 + 5) = 0xff;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    puVar4[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[8] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined2 *)(puVar4 + 0xe) = 0;
    puVar4[10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[0xb] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar4[7] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar4 = 0x88c5a0;
    puVar4[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 != 0) { // [自动静态注释] 条件判断/分支
      iVar3 = *(int *)(param_2 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(int *)(param_2 + 0x60) = iVar3 + 1;
      if ((iVar3 == 1) && (*(char *)(param_2 + 100) != '\0')) { // [自动静态注释] 条件判断/分支
        FUN__text__004473d0(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(puVar4 + 0xe) = param_3;
    *(undefined1 *)((long)puVar4 + 0x71) = param_4;
    FUN__text__004c3b10(puVar4,0,0,puVar4 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar2 = _DAT_008a45f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(puVar4 + 9) != 0) { // [自动静态注释] 条件判断/分支
      puVar1 = (undefined8 *)puVar4[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar5 = puVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar3 = FUN__text__004345d0(*puVar2,*puVar1,puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar1 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (iVar3 == 1 && puVar5 != (undefined8 *)(puVar4[8] + (ulong)*(uint *)(puVar4 + 9) * 8)) // [自动静态注释] 循环/迭代
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (iVar3 != 1) { // [自动静态注释] 条件判断/分支
        FUN__text__00400fc0(0x10,puVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar4 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return puVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


