/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043DF80
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053df80; name: FUN_.text__0053df80
 */


void FUN__text__0053df80(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar9 = *(undefined8 *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *(undefined8 *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = (long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar9 = *(undefined8 *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  uVar5 = *(uint *)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x3c) < uVar1) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0x30) == 0) { // [自动静态注释] 条件判断/分支
      uVar6 = *(uint *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = FUN__text__00400f80(0xe,(ulong)uVar1 * 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar7 == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar8 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((lVar8 != 0) && (lVar8 != lVar7)) { // [自动静态注释] 条件判断/分支
        if (uVar6 != 0) { // [自动静态注释] 条件判断/分支
          lVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            puVar3 = (undefined8 *)(lVar7 + lVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar3[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar3 = 0;
            puVar4 = (undefined8 *)(*plVar2 + lVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar8 = lVar8 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar9 = puVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar10 = puVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar3 = *puVar4;
            puVar3[1] = uVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar3[2] = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((ulong)uVar6 * 0x18 != lVar8); // [自动静态注释] 循环/迭代
          lVar8 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00400fc0(0xe,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar7 = FUN__text__00400fa0(0xe); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar7 == 0) { // [自动静态注释] 条件判断/分支
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0x30) = lVar7;
    *(uint *)(param_1 + 0x3c) = uVar1;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0053e1e0(plVar2,uVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
  memcpy((void *)*plVar2,*(void **)(param_2 + 0x30),(ulong)uVar5 * 0x18); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


