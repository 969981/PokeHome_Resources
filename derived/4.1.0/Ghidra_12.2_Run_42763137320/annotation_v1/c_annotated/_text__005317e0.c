/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004317E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005317e0; name: FUN_.text__005317e0
 */


undefined8 FUN__text__005317e0(long *param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    iVar1 = iVar6 + (uVar7 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = (uint *)(lVar4 + (long)iVar1 * 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar3 == param_2) { // [自动静态注释] 条件判断/分支
      lVar9 = lVar4 + (ulong)uVar2 * 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar8 < (uint *)(lVar9 + -0x58)) { // [自动静态注释] 条件判断/分支
        puVar10 = (undefined1 *)(lVar4 + (long)iVar1 * 0x58 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          *(undefined4 *)(puVar10 + -0xa8) = *(undefined4 *)(puVar10 + -0x50);
          *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x38);
          *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x30);
          *(undefined8 *)(puVar10 + -0x82) = *(undefined8 *)(puVar10 + -0x2a);
          *(undefined8 *)(puVar10 + -0xa0) = *(undefined8 *)(puVar10 + -0x48);
          *(undefined8 *)(puVar10 + -0x98) = *(undefined8 *)(puVar10 + -0x40);
          *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x20);
          *(undefined8 *)(puVar10 + -0x70) = *(undefined8 *)(puVar10 + -0x18);
          *(undefined4 *)(puVar10 + -0x68) = *(undefined4 *)(puVar10 + -0x10);
          if ((*(long *)(puVar10 + -0x60) != 0) && (puVar10[-0x58] != '\0')) { // [自动静态注释] 条件判断/分支
            FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          uVar5 = *(undefined8 *)(puVar10 + -8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(puVar10 + -8) = 0;
          *(undefined8 *)(puVar10 + -0x60) = uVar5;
          puVar8 = (uint *)(puVar10 + -0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar10[-0x58] = *puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar10 = 0;
          puVar10 = puVar10 + 0x58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar8 < (uint *)(lVar9 + -0x58)); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(lVar9 + -0x10) != 0) && (*(char *)(lVar9 + -8) != '\0')) { // [自动静态注释] 条件判断/分支
        FUN__text__00400fc0(9); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar9 + -8) = 0;
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (uVar3 < param_2) { // [自动静态注释] 条件判断/分支
      iVar6 = iVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = uVar7 - (uVar3 < param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = uVar3 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (1 < uVar3); // [自动静态注释] 循环/迭代
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


