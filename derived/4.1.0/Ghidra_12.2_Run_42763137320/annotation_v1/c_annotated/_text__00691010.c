/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00591010
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691010; name: FUN_.text__00691010
 */


void FUN__text__00691010(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__006ee750(*(undefined8 *)(param_1 + 0x1e98)); // [自动静态注释] 调用尚未恢复正式名称的函数
  memset((void *)(lVar2 + *(long *)(param_1 + 0x1ea0)),0, // [自动静态注释] 内存复制、清零或移动
         (ulong)(uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__006ee764(*(undefined8 *)(param_1 + 0x1e98)); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar4 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar4 != (long *)(param_1 + 0x50)) { // [自动静态注释] 循环/迭代
    plVar1 = (long *)plVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(*plVar4 + 8) = plVar1;
    *plVar1 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = *(long **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar4 != (long *)(param_1 + 0x60)) { // [自动静态注释] 循环/迭代
    plVar1 = (long *)plVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(*plVar4 + 8) = plVar1;
    *plVar1 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  plVar4 = *(long **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (plVar4 != (long *)(param_1 + 0x70)) { // [自动静态注释] 循环/迭代
    plVar1 = (long *)plVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(*plVar4 + 8) = plVar1;
    *plVar1 = *plVar4;
    *(long **)(lVar2 + 8) = plVar4;
    *plVar4 = lVar2;
    plVar4 = *(long **)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = (ulong)*(uint *)(param_1 + 0x1880); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x1880) != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = param_1 + uVar3 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = *(long **)(lVar2 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar4 != (long *)(lVar2 + 0x80)) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          plVar1 = (long *)plVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar6 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(long **)(*plVar4 + 8) = plVar1;
          *plVar1 = *plVar4;
          *(long **)(lVar6 + 8) = plVar4;
          *plVar4 = lVar6;
          plVar4 = *(long **)(lVar2 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar4 != (long *)(lVar2 + 0x80)); // [自动静态注释] 循环/迭代
        uVar5 = (ulong)*(uint *)(param_1 + 0x1880); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 < uVar5); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x1880) = 0;
  FUN__text__00692500(param_1 + 0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


