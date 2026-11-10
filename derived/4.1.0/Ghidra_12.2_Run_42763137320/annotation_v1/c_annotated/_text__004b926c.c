/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003B926C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b926c; name: FUN_.text__004b926c
 */


void FUN__text__004b926c(long param_1,undefined4 param_2,long param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined4 *)(param_4 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x110) = param_3;
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00445c40(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar5 = *(long *)(param_1 + 0x110); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = *(undefined8 **)(lVar5 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      puVar2 = (undefined8 *)FUN__text__00400f80(0,0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *puVar2 = *(undefined8 *)(lVar5 + 0x80);
      *(undefined8 **)(lVar5 + 0x80) = puVar2;
      puVar4 = *(undefined8 **)(lVar5 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar4 = *(undefined8 **)(lVar5 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 **)(lVar5 + 0x70) = puVar2;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *puVar4 = puVar2;
      puVar2 = *(undefined8 **)(lVar5 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 **)(lVar5 + 0x78) = puVar2;
    *(undefined8 *)(lVar5 + 0x80) = *puVar2;
    *puVar2 = 0;
    *(int *)(lVar5 + 0x94) = *(int *)(lVar5 + 0x94) + 1;
    lVar5 = *(long *)(lVar5 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(lVar5 + 8) = param_2;
    *(long *)(lVar5 + 0x10) = param_1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


