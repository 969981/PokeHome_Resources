/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B3D10
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b3d10; name: FUN_.text__006b3d10
 */


void FUN__text__006b3d10(long param_1,void *param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = param_3 + *(int *)(*(long *)(param_1 + 0xa8) + 4) + 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar7 = (undefined8 *)FUN__text__006a0f04(iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = *(undefined4 *)(*(undefined8 **)(param_1 + 0xa8) + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar7 = **(undefined8 **)(param_1 + 0xa8);
  *(int *)((long)puVar7 + 4) = iVar2;
  *(undefined4 *)(puVar7 + 1) = uVar4;
  uVar1 = *(short *)(*(long *)(param_1 + 0xa8) + 8) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)(puVar7 + 1) = uVar1;
  *(undefined4 *)((long)puVar7 + 0xc) = 0;
  *(uint *)(puVar7 + 2) = ((uint)uVar1 + (uint)uVar1 * 2) * 4;
  *(undefined4 *)((long)puVar7 + 0x14) = 0x30001;
  lVar10 = *(long *)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(lVar10 + 8) == 0) { // [自动静态注释] 条件判断/分支
    uVar8 = 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar12 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar9 = lVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar11 = lVar10 + lVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = *(undefined2 *)(lVar11 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = *(int *)(lVar11 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar3 = *(int *)(lVar11 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar12 = uVar12 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(undefined1 *)(lVar11 + 0x16); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)((long)puVar7 + lVar9 + 0x23) = 0;
      *(undefined2 *)((long)puVar7 + lVar9 + 0x20) = uVar6;
      *(undefined1 *)((long)puVar7 + lVar9 + 0x22) = uVar5;
      *(int *)((long)puVar7 + lVar9 + 0x18) = iVar2 + param_3 + 8;
      *(int *)((long)puVar7 + lVar9 + 0x1c) = iVar3 + param_3 + 8;
      lVar11 = lVar9 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar12 < *(ushort *)(*(long *)(param_1 + 0xa8) + 8)); // [自动静态注释] 循环/迭代
    lVar10 = lVar9 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = (int)(lVar9 + 0xc) + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)((long)puVar7 + (ulong)uVar8) = 0x10000;
  *(undefined4 *)((long)puVar7 + (ulong)(uVar8 + 4)) = 8;
  memcpy((void *)((long)puVar7 + (ulong)(uVar8 + 8)),param_2,(long)param_3); // [自动静态注释] 内存复制、清零或移动
  lVar11 = *(long *)(param_1 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memcpy((void *)((long)puVar7 + (ulong)(uVar8 + 8 + param_3)),(void *)(lVar11 + lVar10), // [自动静态注释] 内存复制、清零或移动
         (ulong)((*(int *)(lVar11 + 4) + (uint)*(ushort *)(lVar11 + 8) * -0xc) - 0xc)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 **)(param_1 + 0xa8) = puVar7;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


