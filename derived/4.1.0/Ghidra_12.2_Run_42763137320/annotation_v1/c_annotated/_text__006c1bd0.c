/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C1BD0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 同步/原子操作, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1bd0; name: FUN_.text__006c1bd0
 */


long FUN__text__006c1bd0(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pbVar6 = *(byte **)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = lVar3 + 0x22fU & -lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*pbVar6 & 1) == 0) { // [自动静态注释] 条件判断/分支
    lVar3 = *(long *)(pbVar6 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(ulong *)(pbVar6 + 0x40) = lVar3 + uVar4;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar7 = *(long **)(pbVar6 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = *plVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      cVar1 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10); // [自动静态注释] AArch64 独占访问或内存屏障
      if (bVar2) { // [自动静态注释] 条件判断/分支
        *plVar7 = lVar3 + uVar4;
        cVar1 = ExclusiveMonitorsStatus(); // [自动静态注释] AArch64 独占访问或内存屏障
      } // [自动静态注释] 作用域/控制流边界
    } while (cVar1 != '\0'); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = *(long *)(*(long *)(param_1 + 200) + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
    __s = (void *)(lVar5 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    memset(__s,0,0x230); // [自动静态注释] 内存复制、清零或移动
    *(undefined8 *)((long)__s + 0x1d0) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1d8) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1e0) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1e8) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x200) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x208) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1f0) = 0x437f0000437f0000;
    *(undefined8 *)((long)__s + 0x1f8) = 0x437f0000437f0000;
    uVar13 = *(undefined8 *)(param_2 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar12 = *(undefined8 *)(param_2 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(param_2 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = *(undefined8 *)(param_2 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar11 = *(undefined8 *)(param_2 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = *(undefined8 *)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)__s + 0x70) = 0x3f800000;
    *(undefined4 *)((long)__s + 0xcc) = 0x3f800000;
    *(undefined8 *)((long)__s + 0x7c) = 0;
    *(undefined8 *)((long)__s + 0x74) = 0;
    *(undefined8 *)((long)__s + 0x84) = 0xbf800000;
    *(undefined8 *)((long)__s + 0x8c) = 0x3f8000003f800000;
    *(undefined8 *)((long)__s + 0x9c) = 0;
    *(undefined8 *)((long)__s + 0x94) = 0;
    *(undefined8 *)((long)__s + 0xa4) = 0xbf800000;
    *(undefined8 *)((long)__s + 0xac) = 0x3f8000003f800000;
    *(undefined8 *)((long)__s + 0xbc) = 0;
    *(undefined8 *)((long)__s + 0xb4) = 0;
    *(undefined8 *)((long)__s + 0xc4) = 0xbf800000;
    *(undefined8 *)((long)__s + 0x68) = uVar13;
    *(undefined8 *)((long)__s + 0x60) = uVar12;
    *(undefined8 *)((long)__s + 0x48) = uVar9;
    *(undefined8 *)((long)__s + 0x40) = uVar8;
    *(undefined8 *)((long)__s + 0x58) = uVar11;
    *(undefined8 *)((long)__s + 0x50) = uVar10;
    *(undefined2 *)(param_1 + 400) = 0;
    *(undefined1 *)(param_1 + 0x192) = 0;
    *(undefined8 *)((long)__s + 0xd0) = 0x3b8080813b808081;
    *(undefined8 *)((long)__s + 0xd8) = 0x3b8080813b808081;
    FUN__text__0069df20(param_1,__s); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return lVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


