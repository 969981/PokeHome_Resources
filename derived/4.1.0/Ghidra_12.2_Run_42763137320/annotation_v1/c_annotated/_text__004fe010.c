/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FE010
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fe010; name: FUN_.text__004fe010
 */


undefined8 FUN__text__004fe010(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x160) != 0) { // [自动静态注释] 条件判断/分支
    puVar5 = *(undefined8 **)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar6 = (undefined8 *)*puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar6)(puVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00400fc0(2,puVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
        puVar5 = *(undefined8 **)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar4 = (ulong)*(uint *)(param_1 + 0x160); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      puVar8 = puVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar8 != puVar5 + uVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x180) != 0) { // [自动静态注释] 条件判断/分支
    lVar7 = *(long *)(param_1 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      (**(code **)(**(long **)(lVar7 + 8) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar7 = lVar7 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar7 != *(long *)(param_1 + 0x178) + (ulong)*(uint *)(param_1 + 0x180) * 0x10); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x180) = 0;
  local_38 = param_2 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(param_2 + 0x1c);
  uVar2 = *(undefined2 *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x150) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  *(undefined1 *)(param_1 + 0x16d) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 4);
  if (*(int *)(param_2 + 8) == 0) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__004fe420(param_1,param_1 + 0x138,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


