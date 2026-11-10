/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043D740
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053d740; name: FUN_.text__0053d740
 */


void FUN__text__0053d740(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar1 = (long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = *(undefined8 *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar3 = *(uint *)(param_2 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar5 = (uVar3 + 1) - *(uint *)(param_1 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(uint *)(param_1 + 0x44) <= uVar3 + 1 && iVar5 != 0) && // [自动静态注释] 条件判断/分支
     (uVar6 = FUN__text__0051bfc0(plVar1,iVar5), (uVar6 & 1) == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = *(uint *)(param_1 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 <= uVar3) { // [自动静态注释] 条件判断/分支
    iVar5 = uVar3 - *(uint *)(param_1 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(uint *)(param_1 + 0x44) <= uVar3 && iVar5 != 0) && // [自动静态注释] 条件判断/分支
       (uVar6 = FUN__text__0051bfc0(plVar1,iVar5), (uVar6 & 1) == 0)) goto LAB__text__0053d82c; // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar4 < uVar3) && (lVar11 = *plVar1, lVar11 != 0)) { // [自动静态注释] 条件判断/分支
      lVar8 = ~(ulong)uVar4 + (ulong)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar9 = (ulong)uVar4 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      while( true ) { // [自动静态注释] 循环/迭代
        if (lVar11 != 0) { // [自动静态注释] 条件判断/分支
          puVar2 = (undefined8 *)(lVar11 + lVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          puVar2[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar2[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (lVar8 == 0) break; // [自动静态注释] 条件判断/分支
        lVar11 = *plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar8 = lVar8 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar9 = lVar9 + 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0x40) = uVar3;
LAB__text__0053d82c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  memcpy((void *)*plVar1,*(void **)(param_2 + 0x38),(ulong)uVar3 * 0x28); // [自动静态注释] 内存复制、清零或移动
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


